#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e6 + 7;



//works fine till 1e6
vector<ll> divCount(N);
vector<ll> divSum(N);
void divisor_generation(){
    for(int i = 1; i < N; i++){
        for(int j = i; j < N; j += i){
            divCount[j]++;
            divSum[j] += i;
        }
    }
}

vector<ll> spf(N);
void SPF(){
    for(int i = 1; i < N; i++){
        spf[i] = i;
    }
    for(int i = 2; i < N; i++){
        if(spf[i] == i){//if spf[i] is prime
            for(int j = i; j < N; j += i){
                spf[j] = min(spf[j], i*1LL);
            }
        }
    }
}

vector<ll> gpf(N);
vector<set<ll>> distinctFactors(N);
vector<ll> numberOfFactors(N);
void GPF(){
    for(int i = 2; i < N; i++){
        int num = i;
        set<ll> st;
        ll total_factor = 0;
        while(num > 1){
            ll factor = spf[num];
            gpf[i] = max(gpf[i], factor);
            st.insert(factor);
            num /= factor;
            total_factor++;
        }
        distinctFactors[i] = st;
        numberOfFactors[i] = total_factor;
    }
}


void solve(){
    divisor_generation();
    SPF();
    GPF();

    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++){
        cout << spf[arr[i]] << " " << gpf[arr[i]] << " ";
        cout << distinctFactors[arr[i]].size() << " ";
        cout << numberOfFactors[arr[i]] << " ";
        cout << divCount[arr[i]] << " ";
        cout << divSum[arr[i]] << nl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
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
const int N = 1e7 + 7;

vector<ll> primes;

vector<bool> isPrime(N, 1);
void sieve(){
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i*i <= N; i++){
        if(isPrime[i] == true){
            for(int j=i*i; j<=N; j+=i){
                isPrime[j] = false;
            }
        }
    }
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    ll x = 1999999973;
    ll y = 1999999943;

    bool flag = true;
    cout << n - 1 << nl;
    for(int i = 1; i <= n - 1; i++){
        if(flag){
            cout << i << " " << i + 1 << " ";
            cout << x << " " << min(arr[i], arr[i + 1]) << nl;
            arr[i + 1] = min(arr[i], arr[i + 1]);
            flag = false;
        }else{
            cout << i << " " << i + 1 << " ";
            cout << y << " " << min(arr[i], arr[i + 1]) << nl;
            arr[i + 1] = min(arr[i], arr[i + 1]);
            flag = true;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
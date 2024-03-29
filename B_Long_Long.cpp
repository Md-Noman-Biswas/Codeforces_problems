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
const int N = 1e5 + 7;

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += abs(arr[i]);
    }   
    ll ope = 0;
    ll last = llmx;
    bool neg = false;
    bool pos = false;
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            neg = true;
        }
        if(neg){
            if(arr[i] <= 0){
                continue;
            }else{
                ope++;
                neg = false;
            }
        }
    }
    if(neg) ope++;
    cout << sum << " ";
    cout << ope << nl;
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
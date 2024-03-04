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
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    vector<ll> query;
    for(int i = 0; i < n; i++) cin >> arr[i];
    ll mn = llmx;
    for(int i = 0; i < q; i++){
        ll x;
        cin >> x;
        if(x < mn){
            query.push_back(x);
        }
        mn = min(x, mn);
    }

    for(auto it: query){
        for(int i = 0; i < n; i++){
            if(arr[i] % (1 << it) == 0){
                ll temp = it;
                --temp;
                arr[i] += (1 << temp);
            }
        }
    }

    for(auto it: arr){
        cout << it << " ";
    }
    cout << nl;
}

/* Hey you should check this out
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * do something instead of nothing and stay organized
    * bruteforce to find pattern
    * DON'T GET STUCK ON ONE APPROACH
    * Think the problem backwards
    * In practice time don't see failing test case
*/

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
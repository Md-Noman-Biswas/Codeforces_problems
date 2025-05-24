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
const int INF = 1e9 + 10;

void solve(){
    ll n, r, b;
    cin >> n >> r >> b;
    string ans;
    map<ll, ll> mp;
    ll sz = 2 * b - 1 + 2;
    for(int i = 0; i < sz; i++){
        if(i % 2 != 0 && b){
            mp[i]++;
            b--;
        }
    }

    while(r){
        for(int i = 0; i < sz; i++){
            if(i % 2 == 0 && r){
                mp[i]++;
                r--;
            }
        }
    }

        // for(auto it: mp){
        //     cout << it.first << " " << it.second << nl;
        // }

    for(auto it: mp){
        if(it.first % 2 == 0){
            for(int i = 0; i < it.second; i++){
                ans.push_back('R');
            }
        }else{
            for(int i = 0; i < it.second; i++){
                ans.push_back('B');
            }
        }
    }
    cout << ans << nl;
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
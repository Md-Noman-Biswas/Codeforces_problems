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
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n + 1);
    map<ll, ll> mp;
    ll sum = 0;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        sum += arr[i];
        mp[i] = arr[i];
    }   
    ll last = -1;
    while(q--){
        ll type;
        cin >> type;
        if(type == 1){
            ll ind, v;
            cin >> ind >> v;
            if(mp[ind] != 0){
                sum -= mp[ind];
            }else{
                sum -= last;
            }
            sum += v;
            mp[ind] = v;
        }else{
            ll v;
            cin >> v;
            mp.clear();
            last = v;
            sum = n * v;
        }
        cout << sum << nl;
    }
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
    solve();
    return 0;
}
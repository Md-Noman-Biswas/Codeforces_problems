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
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    ll last_element = b * k;
    ll tempp = last_element;
    ll range = last_element + (k - 1) * (n);
    vector<ll> ans(n);
    ans[0] = last_element;
    ll temp = n;
    //cout << range << nl;
    if(s > range || s < last_element){
        cout << -1 << nl;
        return;
    }

    s -= last_element;
    for(int i = 0; i < ans.size(); i++){
        ll now = min(s, k - 1);
        s -= now;
        if(now < 0) now = 0;
        ans[i] += now;
    }

    for(auto it: ans){
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
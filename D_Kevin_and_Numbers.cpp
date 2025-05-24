#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "Yes\n"
#define NO cout << "No\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

void solve(){
    ll n, m;
    cin >> n >> m;
    map<ll, ll> mp1, mp2;
    set<ll, greater<ll>> sta, stb;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        mp1[x]++;
        sta.insert(x);
    }   
    for (int i = 0; i < m; i++) {
        ll x;
        cin >> x;
        mp2[x]++;
        stb.insert(x);
    }   

    while (1) {
        if (sta.empty() && stb.empty()) {
            YES;
            return;
        }
        if (sta.empty() || stb.empty()) {
            NO;
            return;
        }
        ll mxa = *sta.begin();
        ll mxb = *stb.begin();

        if (mxa > mxb) {
            NO;
            return;
        }

        if (mp1[mxb]) {
            ll mn = min(mp1[mxb], mp2[mxb]);
            mp1[mxb] -= mn;
            mp2[mxb] -= mn;
            if (mp1[mxb] == 0) {
                sta.erase(mxb);
            }
            if (mp2[mxb] == 0) {
                stb.erase(mxb);
            }
        }
        else {
            ll up = (mxb + 1) / 2;
            ll lb = mxb / 2;
            mp2[up] += mp2[mxb];
            mp2[lb] += mp2[mxb];
            mp2[mxb] = 0;
            stb.insert(up);
            stb.insert(lb);
            if (mp2[mxb] == 0) stb.erase(mxb);
        }
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
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
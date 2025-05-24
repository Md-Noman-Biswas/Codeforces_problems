#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define db cout << "h"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

bool cmp(pair<ll, string> pr1, pair<ll, string> pr2) {
    return pr1.first > pr2.first;
}
void solve(){
    ll n;
    cin >> n;
    vector<string> words;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        words.push_back(s);
    }
    ll ans = llmn;
    for (char ch = 'a'; ch <= 'e'; ch++) {
        vector<pair<ll, string>> pr;
        for (int i = 0; i < n; i++) {
            ll cnt = 0;
            for (auto it: words[i]) {
                if (it == ch) cnt++;
            }
            pr.push_back({cnt - (words[i].size() - cnt), words[i]});
        }
        sort(pr.begin(), pr.end(), cmp);
        // cout << ch << " -> " << nl;
        // for (auto it: pr) {
        //     cout << it.first << " " << it.second << nl;
        // }   
        ll sum = 0;
        ll cnt = 0;
        for (int i = 0; i < pr.size(); i++) {
            sum += pr[i].first;
            if (sum <= 0) break;
            else cnt++;
            // cout << pr[i].second << nl;
        }
        ans = max(ans, cnt);
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
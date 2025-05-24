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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    ll q;
    cin >> q;

    while (q--) {
        string s;
        cin >> s;
        bool found = false;
        if (s.size() != n) {
            NO;
            found = true;
            continue;
        }
        map<char, ll> mp;
        map<ll, set<char>> mp2;
        for (int i = 'a'; i <= 'z'; i++) mp[char(i)] = -llmx;
        for (int i = 0; i < s.size(); i++) {
            if (mp[s[i]] == -llmx) {
                mp[s[i]] = arr[i];
                mp2[arr[i]].insert(s[i]);
            }
            else if (mp[s[i]] != arr[i]) {
                if (!found) NO;
                found = true;
                continue;
            }
            else {
                mp2[arr[i]].insert(s[i]);
            }
        }

        for (auto it: mp2) {
            if (it.second.size() > 1) {
               if (!found) NO;
                found = true;
                continue;
            }
        }
        if (!found) YES;
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
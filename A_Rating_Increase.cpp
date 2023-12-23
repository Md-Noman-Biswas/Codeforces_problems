#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

void solve() {
    string s;
    cin >> s;
    string ans1;
    string ans2;
    ans1.push_back(s[0]);
    int i;
    for (i = 1; i < s.size(); i++) {
        if (s[i] > '0') {
            break;
        }
        ans1.push_back(s[i]);
    }
    for (int j = i; j < s.size(); j++) {
        ans2.push_back(s[j]);
    }
    int res1 = (ans1.empty() ? 0 : stoi(ans1));
    int res2 = (ans2.empty() ? 0 : stoi(ans2));

    if (res1 >= res2) {
        cout << -1 << nl;
        return;
    }
    cout << res1 << " " << res2 << nl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

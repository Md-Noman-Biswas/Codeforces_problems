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
    string s1, s2;
    cin >> s1 >> s2;
    ll cross = 0;
    for (auto it: s1) {
        if (it == 'x') cross++;
    }
    for (auto it: s2) {
        if (it == 'x') cross++;
    }

    if (cross == 0) {
        cout << 0 << nl;
        return;
    }

    ll ope = 0;
    for (int i = 1; i < s1.size() - 1; i++) {
        if (s1[i] == '.' && s1[i - 1] == 'x' && s1[i + 1] == 'x') {
            if (s2[i - 1] == '.' && s2[i + 1] == '.' && s2[i] == '.'){
                ope++;
            }
        }
    }

    for (int i = 1; i < s2.size() - 1; i++) {
        if (s2[i] == '.' && s2[i - 1] == 'x' && s2[i + 1] == 'x') {
            if (s1[i - 1] == '.' && s1[i + 1] == '.' && s1[i] == '.'){
                ope++;
            }
        }
    }
    cout << ope << nl;
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
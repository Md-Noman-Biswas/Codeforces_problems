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
    ll n, k;
    cin >> n >> k;
    ll v = k;
    string s;
    for (int i = 0; i < n; i++) {
        for (int j = 9; j >= 1; j--) {
            if (v - j >= 0) {
                v -= j;
                s.push_back('0' + j);
                break;
            }
        }
    }   
    for (int i = s.size(); i < n; i++) {
        s.push_back('0');
    }
    // cout << s << nl;
    string ans1 = s;
    reverse(s.begin(), s.end());
    ll first_d = -1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] > '0') {
            first_d = i;
            break;
        }
    }
    // cout << first_d << nl;
    // for (int i = 0; i < first_d;) {
    //     if (s[i] != '0') break;
    //     else {
    //         while (s[first_d] > '0') {
    //             s[first_d]--;
    //             s[i] = '1';
    //             i++;
    //             break;
    //         }
    //         if (s[first_d] == '0') first_d++;
    //         if (first_d >= n) break;
    //     }
    // }
    
    if (s[0] == '0' && first_d != -1) {
        s[0] = '1';
        s[first_d]--;
    }
    
    string ans2 = s;
    // if (ans2[0] == '0') ans2 = ans1;
    ll sum = 0;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        sum += s[i] - '0';
        if (s[i] > '0') flag = true; 
    }
    if ((sum != k) || (!flag && s.size() > 1)) {
        cout << -1 << " " << -1 << nl;
        return;
    }
    else {
        cout << ans2 << " " << ans1 << nl;
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
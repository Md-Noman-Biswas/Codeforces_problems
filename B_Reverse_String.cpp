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


bool cmp(string &s, string &t, ll ind) {
    ll i, j;
    i = ind, j = 0;
    ll n = s.size(), m = t.size();
    string curr;
    while (j < m) {
        if (s[i] == t[j] && i < n) {
            curr.push_back(s[i]);
            
            string temp = curr;
            ll temp_ind = i - 1;
            ll req = m - (j + 1);
            //cout << req << nl;
            while (req--) {
                if (temp_ind < 0) break;
                temp.push_back(s[temp_ind]);
                temp_ind--;
            }
            if (temp == t) {
                return true;
            }
            j++;
            i++;
        }
        else {
            break;
        }
    }
    ll req_move = m - j;
    i -= 2;
    while (req_move--) {
        if (i < 0) break;
        curr.push_back(s[i]);
        i--;
    }
    //cout << curr << nl;
    return curr == t;
}



void solve(){
    string s, t;
    cin >> s >> t;
    vector<ll> start;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == t[0]) {
            start.push_back(i);
        }
    }

    //cout << cmp(s, t, 2) << nl;
    bool flag = false;
    for (int i = 0; i < start.size(); i++) {
        if (cmp(s, t, start[i])) {
            flag = true;
            break;    
        }
    }

    if (flag) YES;
    else NO;

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
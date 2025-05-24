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
    string s;
    cin >> s;
    set<ll> st;
    for (auto it: s) st.insert(it);
    if (s.size() == 1) {
        cout << (s[0] == '0') << nl;
        return;
    }

    ll cnt1 = 0;
    ll ans1 = 0;
    ll ans2 = 0;
    ll flag = false;
    int start = 0;
    if (s[0] == '0') {
        flag = true;
        start = 1;
        ans1++;
    }
    for (int i = start; i < n; i++) {
        if (s[i] == '0') cnt1++;
        if (cnt1 == k + 1 && s[i] == '0') {
            ans1++;
            cnt1 = 0;
            flag = true;
        }
        else if(s[i] == '1' && cnt1 < k && flag == true) {
            if (ans1 != 0) ans1--;
            flag = false;
            cnt1 = 0;
        }
        else if (s[i] == '1') {
            cnt1 = 0;
        }
        //cout << cnt1 << " " << ans1 << nl;
    }   
      
    cout <<ans1 << nl;
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
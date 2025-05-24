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
    vector<ll> divs;
    ll temp = n;
    for (ll i = 2; i * i <= n; i++) {
        vector<ll> curr_divs;
        if (n % i == 0) {
            while (temp % i == 0) {
                temp /= i;
                curr_divs.push_back(i);
            } 
            if (temp != 1) {
                ll last = curr_divs.back();
                curr_divs.pop_back();
                curr_divs.push_back(temp * last);
            }
        }
        //cout << curr_divs.size();
        if (curr_divs.size() > divs.size()) {
            divs = curr_divs;
            curr_divs.clear();
        }
        temp = n;
    }   
    sort(divs.begin(), divs.end());

    if (divs.empty()) {
        cout << 1 << nl;
        cout << n << nl;
        return;
    }

    cout << divs.size() << nl;
    for (auto it: divs) cout << it << " ";
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
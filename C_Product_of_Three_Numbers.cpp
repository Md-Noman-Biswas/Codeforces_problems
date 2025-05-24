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

    vector<ll> ans;
    for (int i = 2; i * i * i <= n; i++) {
        bool flag = false;
        for (int j = 2; i * j * j <= n; j++) {
            ll temp = i * j;
            if (n % temp == 0 && (n / temp) != i && (n / temp) != j && i != j) {
                // cout << "h";
                ans.push_back(i);
                ans.push_back(j);
                ans.push_back(n / (i * j));
                flag = true; 
                break;
            }
        }
        if (flag) break;
    }   

    if (ans.size() == 3) {
        YES;
        for (auto it: ans) cout << it << " ";
        cout << nl;
    }
    else {
        NO;
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
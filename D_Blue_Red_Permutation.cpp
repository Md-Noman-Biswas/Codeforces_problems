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


bool cmp(pair<ll, char> p1, pair<ll, char>p2) {
    if (p1.second == p2.second) return p1.first < p2.first;
    return p1.second < p2.second;
}


void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    string s;
    cin >> s;
    vector<pair<ll, char>> pr;
    for (int i = 0; i < n; i++) {
        pr.push_back({arr[i], s[i]});
    }   
    sort(pr.begin(), pr.end(), cmp);

    // for (auto it: pr) cout << it.first << " " << it.second << nl;
    ll need = 1;
    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (pr[i].first > need && pr[i].second != 'B') {
            flag = false;
            break;
        } 
        else if (pr[i].first < need && pr[i].second != 'R') {
            flag = false;
            break;
        }
        need++;
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
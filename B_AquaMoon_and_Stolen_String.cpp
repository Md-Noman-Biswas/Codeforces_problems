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

void solve(){
    ll n, m;
    cin >> n >> m;
    vector<string> v;

    n = 2 * n - 1;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }

    string ans;
    for(int i = 0; i < m; i++){
        map<char, ll> mp;
        for(int j = 0; j < v.size(); j++){
            mp[v[j][i]]++;
        }

        for(auto it: mp){
            if(it.second % 2 != 0){
                ans += it.first;
            }
        }

    }

    cout << ans << nl;
}

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
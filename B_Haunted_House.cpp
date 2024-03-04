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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    ll index = 1;
    ll ope = 0;
    vector<ll> ans;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            ope += (i + 1 - index);
            ans.push_back(ope);
            index++;
        }
    }

    for(auto it: ans){
        cout << it << " ";
    }
    for(int i = ans.size(); i < n; i++){
        cout << -1 << " ";
    }
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
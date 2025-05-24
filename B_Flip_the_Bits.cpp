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
    int zero = 0;
    int one = 0;
    map<int, pair<int, int>> mp;
    for(int i = 0; i < s1.size(); i++){
        if(s1[i] == '0') zero++;
        if(s1[i] == '1') one++;
        mp[i].first = zero;
        mp[i].second = one;
    }   
    // for(auto it: mp){
    //     cout << it.first << " " << it.second.first << " " << it.second.second << nl;
    // }
    bool flag = 0;
    bool type = true;
    for(int i = n - 1; i >= 0; i--){
        if(type){
            if(s1[i] != s2[i]){
                if(mp[i].first != mp[i].second){
                    //cout << i << nl;
                    NO;
                    return;
                }else{
                    type = false;
                }
            }
        }else{
            if(s1[i] == s2[i]){
                if(mp[i].first != mp[i].second){
                    NO;
                    return;
                }else{
                    type = true;
                }
            }
        }
    }
    YES;
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
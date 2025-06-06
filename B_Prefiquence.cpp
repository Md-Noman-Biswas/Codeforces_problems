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
    string s1, s2;
    cin >> s1 >> s2;
    map<char, ll> mp;
    for(auto it: s2){
        mp[it]++;
    }   
    ll cnt = 0;
    ll l = 0;
    ll r = 0;
    while(l < n && r < k){
        if(s1[l] == '1'){
            while(r < k){
                if(s2[r] == '1'){
                    cnt++;
                    r++;
                    break;
                }else{
                    r++;
                }
            }
            l++;
        }else{
            while(r < k){
                if(s2[r] == '0'){
                    cnt++;
                    r++;
                    break;
                }else{
                    r++;
                }
            }
            l++;
        }
    }
    cout << cnt << nl;
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
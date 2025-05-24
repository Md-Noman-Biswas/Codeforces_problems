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
    string s1, s2;
    cin >> s1;
    cin >> s2;

    string path;

    ll l = 1;
    ll r = 0;
    path += s1[0];
    bool flag = true;
    bool down = false;
    while(r < s2.size()){
        if(flag){
            if(s1[l] <= s2[r] && l < n){
                path += s1[l];
                l++;
                r++;
            }
            else{
                flag = false;
            }
        }else{
            down = true;
            path += s2[r];
            r++;
        }
    }
    
    if(down != true){
        path += s2.back();
    }
    
    cout << path << nl;

    ll ans = 1;
    for(int i = 1; i < s1.size(); i++){
        if(s1[i] == s2[i - 1]){
            ans++;
        }
        else if(s1[i] == '0' && s2[i - 1] == '1'){
            ans = 1;
        }else{
            break;
        }
    }
    cout << ans << nl;
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
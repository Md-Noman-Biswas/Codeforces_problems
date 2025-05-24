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
    string s;
    cin >> s;
    ll current_max = (int)s[0];
    ll mx_index = 0;
    ll mn_index = 0;
    bool flag = false;
    for(int i = 1; i < s.size(); i++){
        ll temp = (int)s[i];
        if(current_max <= temp){
            mx_index = i;
            current_max = temp;
        }else{
            mn_index = i;
            flag = true;
            break;
        }
    }   
    if(!flag){
        NO;
    }else{
        YES;
        cout << ++mx_index << " " << ++mx_index << nl;
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
    solve();
    return 0;
}
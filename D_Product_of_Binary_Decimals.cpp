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
    ll temp = n;
    ll temp2 = n;
    ll temp3 = n;
    string s = to_string(n);
    bool flag = true;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '0' && s[i] != '1'){
            flag = false;
            break;
        }
    }
    if(flag){
        YES;
        return;
    }
    vector<ll> factors;


    while(temp % 11 == 0){
        factors.push_back(11);
        temp /= 11;
    }
    factors.push_back(temp);

    // for(auto it: factors){
    //     cout << it << " ";
    // }
    // cout << nl;

    bool flag11 = true;
    bool flag101 = true;
    bool flag111 = true;

    ll remain = temp;
    string ss = to_string(remain);
    for(int i = 0; i < ss.size(); i++){
        if(ss[i] != '0' && ss[i] != '1'){
            flag11 = false;
            break;
        }
    }

    while(temp2 % 101 == 0){
        temp2 /= 101;
    }

    ll remain2 = temp2;
    string ss2 = to_string(remain2);
    for(int i = 0; i < ss2.size(); i++){
        if(ss2[i] != '0' && ss2[i] != '1'){
            flag101 = false;
            break;
        }
    }

    while(temp3 % 111 == 0){
        temp3 /= 111;
    }

    ll remain3 = temp3;
    string ss3 = to_string(remain3);
    for(int i = 0; i < ss3.size(); i++){
        if(ss3[i] != '0' && ss3[i] != '1'){
            flag111 = false;
            break;
        }
    }

    if(flag11 == true || flag101 == true || flag111 == true){
        YES;
    }else{
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
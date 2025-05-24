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
    string s;
    cin >> s;
    deque<char> dq;
    map<char, ll> mp;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
        dq.push_back(s[i]);
    }   
    string t;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0' && mp['1'] > 0){
            mp['1']--;
            t.push_back('1');
        }
        if(s[i] == '1' && mp['0'] > 0){
            mp['0']--;
            t.push_back('0');
        }
    }
    //cout << t << nl;

    for(int i = 0; i < t.size(); i++){
        if(t[i] == s[i]){
            break;
        }else{
            dq.pop_front();
        }
    }
    cout << dq.size() << nl;
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
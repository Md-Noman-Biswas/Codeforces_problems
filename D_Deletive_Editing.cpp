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
    string s, t, xd;
    cin >> xd >> t;
    map<char, int> mps;
    map<char, int> mpt;
    for(int i = 0; i < xd.size(); i++){
        if(t.find(xd[i]) != string :: npos){
            s.push_back(xd[i]);
            mps[xd[i]]++;
        }
    }
    //cout << s << nl;

    for(auto it: t){
        mpt[it]++;
    }

    for(auto it: mps){
        if((it.second - mpt[it.first]) < 0){
            NO;
            return;
        }
    }
    map<int, char> mp;
    for(auto it: mpt){
        ll temp = mps[it.first] - it.second;
        //cout << temp << nl;
        for(int i = 0; i < s.size(); i++){
            if(temp == 0) break;
            if(s[i] == it.first){
                mp[i] = '#';
                temp--;
            }
        }
    }
    string ans;
    for(int i = 0; i < s.size(); i++){
        if(mp[i] != '#'){
            ans.push_back(s[i]);
        }
    }

    (ans == t) ? YES : NO;

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
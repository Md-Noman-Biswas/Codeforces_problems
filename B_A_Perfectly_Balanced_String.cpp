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
    string s;
    cin >> s;
    bool consec = false;
    map<char, ll> mp;
    for(int i = 0; i < s.size(); i++){
        if(i != (s.size() - 1)){
            if(s[i] == s[i + 1]){
                consec = true;
            }
        }
        mp[s[i]]++;
    }   

    if(mp.size() == 1){
        YES;
        return;
    }

    if(consec){
        NO;
        return;
    }

    ll window_size = mp.size();
    bool flag = true;
    for(int i = 0; i < s.size() - window_size + 1; i++){
        set<char> st;
        for(int j = i; j < i + window_size; j++){
            st.insert(s[j]);
        }
        if(st.size() < window_size){
            flag = false;
            break;
        }
    }
    if(flag) YES;
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
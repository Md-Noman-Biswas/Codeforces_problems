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
    set<string> st;
    int arr[21];
    for(int i = 0; i < 21; i++){
        cin >> s;
        map<char, ll> mp;
        for(int j = 0; j < s.size(); j++){
            mp[s[j]]++;
        }
        cout << "-> " << i << nl;
        for(auto it: mp){
            cout << it.first << " " << it.second << nl;
        }
        cout << nl;
        st.insert(s);
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
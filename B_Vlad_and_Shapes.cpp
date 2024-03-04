#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "SQUARE\n"
#define NO cout << "TRIANGLE\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;

ll count_of_one(string v){
    ll cnt = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == '1') cnt++;
    }
    return cnt;
}

void solve(){
    ll n;
    cin >> n;
    vector<string> v[n];
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        v[i].push_back(s);
    }

    set<ll> st;
    for(int i = 0; i < n; i++){
        string temp;
        for(auto it: v[i]){
            for(auto it2: it){
                temp.push_back(it2);
            }
        }
        ll xd = count_of_one(temp);
        if(xd != 0){
            st.insert(xd);
        }
    }

    if(st.size() == 1) YES;
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
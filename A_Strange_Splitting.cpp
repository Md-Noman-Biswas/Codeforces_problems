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
    vector<ll> arr(n);
    set<ll> st;
    map<ll, ll> mp;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        st.insert(arr[i]);
        mp[arr[i]]++;
    }   
    if(st.size() == 1){
        NO;
        return;
    }

    YES;
    if(st.size() == n){
        cout << 'R';
        for(int i = 1; i < n; i++){
            cout << 'B';
        }
        cout << nl;
        return;
    }
    int val = -1;
    for(auto it: mp){
        if(it.second >= 2){
            val = it.first;
            break;
        }   
    }
    map<ll, char> mpc;
    vector<ll> hsh(51, 0);
    for(int i = 0; i < n; i++){
        if(arr[i] == val){
            mpc[i] = 'B';
            hsh[i] = 1;
            break;
        }
    }
    for(int i =0; i < n; i++){
        if(arr[i] == val && hsh[i] != 1){
            mpc[i] = 'R';
            hsh[i] = 1;
            break;
        }
    }
    for(int i = 0; i < n; i++){
        if(hsh[i] == 0){
            mpc[i] = 'B';
        }
    }
    for(auto it: mpc){
        cout << it.second;
    }
    cout << nl;

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
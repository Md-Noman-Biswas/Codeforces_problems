#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "Yes\n"
#define NO cout << "No\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

bool check(ll n, set<ll> &st){
    for(auto it: st){
        if((n & (1<<it)) != 0){//1000
            return false;
        }
    }
    return true;
}


void solve(){
    ll n, x;
    cin >> n >> x;
    vector<long long> v1, v2, v3;
    for(int i = 0; i < n; i++){
        long long temp;
        cin >> temp;
        v1.push_back(temp);
    }
    for(int i = 0; i < n; i++){
        long long temp;
        cin >> temp;
        v2.push_back(temp);
    }
    for(int i = 0; i < n; i++){
        long long temp;
        cin >> temp;
        v3.push_back(temp);
    }

    set<ll> st;
    ll last_set_bit = 0;
    for(int i = 0; i < 8; i++){
        if((x & (1<<i)) != 0){
            last_set_bit = i;
        }
    }
    for(int i = 0; i < 32; i++){
        if((x & (1<<i)) != 0){
            
        }else{
            if(i < last_set_bit){
                st.insert(i);
            }
        }
    }

    vector<bool> vis(3, 0);
    ll target = 0;
    for(int i = 0; i < n; i++){
        if(target == x) break;
        if(!vis[0]){
            if(check(v1[i], st) && v1[i] <= x){
                target |= v1[i];
            }else{
                vis[0] = 1;
            }
        }
        if(!vis[1]){
            if(check(v2[i], st) && v2[i] <= x){
                target |= v2[i];
            }else{
                vis[1] = 1;
            }
        }
        if(!vis[2]){
            if(check(v3[i], st) && v3[i] <= x){
                target |= v3[i];
            }else{
                vis[2] = 1;
            }
        }
        if((vis[0] && vis[1] && vis[2]) == 1){
            break;
        }
    }
    if(target == x) YES;
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
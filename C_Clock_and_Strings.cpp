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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    set<ll> st1;
    set<ll> st2;
    if(a > b) swap(a, b);
    for(int i = a + 1; i < b; i++){
        st1.insert(i);
    }
    for(int i = 1; i <= 12; i++){
        if(st1.find(i) == st1.end() && i != a && i != b){
            st2.insert(i);
        }
    }

    if((st1.count(c) && st2.count(d)) || (st1.count(d) && st2.count(c))){
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
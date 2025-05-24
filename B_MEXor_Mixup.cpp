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
const int N = 3e5 + 7;
const int INF = 1e9 + 10;

vector<ll> pref(N);
void pre(){
    pref[0] = 0;
    for(int i = 1; i <= N; i++){
        pref[i] = pref[i - 1] ^ i;
    }
}


void solve(){
    ll a, b;
    cin >> a >> b;
    ll size = a;
    if(pref[a] == b) size++;
    if(pref[a - 1] != b){
        size++;
    }
    cout << size << nl;
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
    pre();
    while(t--) {
        solve();
    }
    return 0;
}
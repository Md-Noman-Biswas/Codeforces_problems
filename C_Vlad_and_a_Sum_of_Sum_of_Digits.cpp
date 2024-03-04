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
const int N = 2e5 + 7;

vector<ll> pref(N, 0);

ll digit_sum(ll n){
    ll temp = 0;
    while(n){
        temp += (n % 10);
        n /= 10;
    }
    return temp;
}

void init(){
    for(int i = 1; i < N; i++){
        ll temp = digit_sum(i);
        pref[i] = temp + pref[i - 1];
    }
}

void solve(){
    ll n;
    cin >> n;   
    cout << pref[n] << nl;
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
    init();
    while(t--) {
        solve();
    }
    return 0;
}
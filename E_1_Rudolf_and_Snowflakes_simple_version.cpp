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
set<ll> universal;

void pre(){
    for(int i = 2; i <= 1e3; i++){
        ll temp = 1;
        for(int j = 1; j <= 20; j++){
            temp += pow(i, j);
            if(temp <= 1e6 && j > 1) universal.insert(temp);
        }
    }
}

void solve(){
    ll n;
    cin >> n;
    if(universal.find(n) != universal.end()){
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
    pre();
    while(t--) {
        solve();
    }
    return 0;
}
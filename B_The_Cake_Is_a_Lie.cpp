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
    ll n, m, k;
    cin >> n >> m >> k;
    ll cost1 = 0, cost2 = 0;

    cost1 += (n - 1) * 1;
    cost1 += (m - 1) * n;

    cost2 += (m - 1) * 1;
    cost2 += (n - 1) * m;
    
    if(cost1 == k || cost2 == k){
        YES;
    }else{
        NO;
    }
}

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
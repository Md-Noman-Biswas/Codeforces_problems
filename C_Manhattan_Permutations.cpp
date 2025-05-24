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

void solve(){
    ll n, k;
    cin >> n >> k;
    ll temp = n - 1;
    ll sum = 0;
    while(temp > 0){
        sum += temp;
        temp -= 2;
    }
    sum *= 2;
    if(k % 2 != 0 || sum < k){
        NO;
        return;
    }
    YES;
    ll diff = n - 1;
    ll xd = k / 2;
    ll cng = 0;
    vector<ll> ans(n + 1);
    temp = n - 1;
    for(int i = 1; i <= n; i++){
        ans[i] = i;
    }
    for(int i = 1; i <= n; i++){
        if(xd <= temp){
            swap(ans[i], ans[i + xd]);
            break;
        }
        swap(ans[i], ans[i + temp]);
        xd -= temp;
        temp -= 2;
        if(temp <= 0) break;
        if(xd <= 0) break;
    }
    for(int i = 1; i <= n; i++){
        cout << ans[i] << " ";
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
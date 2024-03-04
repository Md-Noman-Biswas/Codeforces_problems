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

ll next_multiple(ll x){
    ll temp = ceil(x / (3 * 1.0)) * 3;
    return temp;
}

ll prev_multiple(ll x){
    ll temp = (x / 3) * 3;
    return temp;
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n + 1);
    ll sum = 0;
    ll index = -1;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        sum += arr[i];
        if(sum % 3 == 0){
            //cout << sum << nl;
            index = i;
        }
    }   
    //cout << sum << nl;
    ll xd1 = next_multiple(sum);
    //cout << xd1 << nl;

    ll temp = sum;
    bool flag = false;
    for(int i = 1; i <= n; i++){
        temp -= arr[i];
        if(temp % 3 == 0){
            flag = true;
            break;
        }
        temp = sum;
    }

    ll ans = min(n - index, xd1 - sum);

    if(flag) ans = min(ans, 1*1LL);

    cout << ans << nl;

}

/* Hey yo
u should check this out
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
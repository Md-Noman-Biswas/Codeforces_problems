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
    ll n, k;
    cin >> n >> k;
    ll cnt = k - 3;
    vector<ll> ans;
    for(int i = 0; i < cnt; i++){
        ans.pb(1);
    }

    n -= cnt;

    for(auto it: ans){
        cout << it << " ";
    }

    if(n % 2 == 0){
        if(n % 4 != 0){
            ll y = (n - 1) / 2;
            cout << y << " " << y << " " << 2 << nl;
        }else{
            cout << n/2 << " " << n/4 << " " << n/4 << nl;
        }
    }else{
        cout << n / 2 << " " << n / 2 << " " << 1 << nl;
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
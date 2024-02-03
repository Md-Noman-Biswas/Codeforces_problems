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
    ll k;
    cin >> k;

    vector<ll> ans;

    while(k > 0){
        ans.pb(k % 9);
        k /= 9;
    }

    reverse(ans.begin(), ans.end());

    for(int i = 0; i < ans.size(); i++){
       if(ans[i] < 4){
            cout << ans[i];
       }else{
            cout << ans[i] + 1;
       }
    }
    cout << nl;

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
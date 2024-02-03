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
    ll n, x, y;
    cin >> n;
    cin >> x >> y;
    ll diff = 1;
    ll flag = false;
    for(int i = 1; i <= 100; i++){
        ll cnt = 0;
        if((y - x) % i == 0){
            for(int j = y; j >= 0; j -= i){
                cnt++;
                if(cnt > n) break;
                if(j == x){
                    diff = i;
                    flag = true;
                    break;
                }
            }   
            if(flag){
                break;
            }
        }
    }   

    ll cnt = 0;
    vector<ll> ans;

    for(int i = y; i >= 1; i -= diff){
        cnt++;
        ans.pb(i);
        if(cnt == n) break;
    }
    sort(ans.begin(), ans.end());
    if(ans.size() < n){
        ll temp = n - ans.size();
        while(temp--){
            ll x = ans.back();
            ans.pb(x + diff);
        }
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
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
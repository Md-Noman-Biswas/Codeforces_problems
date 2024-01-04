#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n);
    vector<ll> brr(m);
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=0; i<m; i++) cin >> brr[i];

    ll ans = LONG_LONG_MAX;
    for(int i=0; i<n; i++){
        ll temp = LONG_LONG_MIN;
        for(int j=0; j<n; j++){
            if(i != j){
                for(int k=0; k<m; k++){
                    temp = max(arr[j] * brr[k], temp);
                }   

            }
        }
        ans = min(ans, temp);
    }

    cout << ans << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}



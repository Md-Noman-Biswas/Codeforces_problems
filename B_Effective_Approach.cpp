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
    ll n;
    cin >> n;
    vector<ll> arr(n+1);
    vector<ll> front(N, 0);
    vector<ll> back(N, 0);
    for(int i=1; i<=n; i++) cin >> arr[i];
    ll m;
    cin >> m;
    vector<ll> query(m+1);
    for(int i=1; i<=m; i++) cin >> query[i];

    for(int i=1; i<=n; i++){
        front[arr[i]] = i;
    }

    ll index = 1;
    for(int i=n; i>=1; i--){
        back[arr[index]] = i; 
        index++;
    }

    ll ans1 = 0;
    for(int i=1; i<=m; i++){
       ans1 += front[query[i]];
    }
    ll ans2 = 0;
    for(int i=1; i<=m; i++){
       ans2 += back[query[i]];
    }
    
    cout << ans1 << " " << ans2 << nl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
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

bool cmp(pair<ll, ll> p1, pair<ll, ll> p2){
    if(p1.first == p2.first) return p1.second < p2.second;
    return p1.first > p2.first;
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    ll ans = -1;
    ll index = -1;
    ll mx = llmn;
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1] && mx < arr[i]){
            ans = i;
            mx = max(mx, arr[i]);
        }
        if(arr[i+1] > arr[i] && mx < arr[i+1]){
            ans = i+1;
            mx = max(mx, arr[i+1]);
        }
    }
    if(ans != -1) ans++;
    cout << ans << nl;
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

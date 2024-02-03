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
    vector<ll> arr(n, 0);
    for(int i = 0; i < n-1; i++) cin >> arr[i];
    vector<ll> ans;
    bool flag = false;
    ans.pb(arr[0]);
    for(int i = 0; i < n-2; i++){
        ans.pb(min(arr[i], arr[i+1]));
    }   
    ans.pb(arr[n - 2]);
    for(auto it: ans){
        cout << it << " ";
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
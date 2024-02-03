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
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());
    vector<ll> ans;
    ll l = 0;
    ll r = n - 1;

    while(l < n / 2){
        ans.pb(arr[l]);
        ans.pb(arr[r]);
        l++;
        r--;
    }
    reverse(ans.begin(), ans.end());
    if(n & 1){
        cout << arr[n/2] << " ";
        for(auto it: ans){
            cout << it << " ";
        }
        cout << nl;
    }else{
        for(auto it: ans){
            cout << it << " ";
        }
        cout << nl;
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
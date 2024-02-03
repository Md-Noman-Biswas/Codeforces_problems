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
    unordered_map<ll, ll> mp;
    ll right = llmx;
    ll min_ever = llmx;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = n-1; i >= 0; i--){
        right = min(right, arr[i]); 
        mp[arr[i]] = right;
    }

    vector<ll> ans;

    ll max_till_now = llmn;
    ll cnt = 0;

    for(int i = 0; i < n; i++){
        max_till_now = max(arr[i], max_till_now);
        if(max_till_now <= arr[i] && mp[arr[i]] >= arr[i]){
            cnt++;
            ans.pb(arr[i]);
        }
    }
    
    if(cnt > 100) cnt = 100; 
    cout << ans.size() << " ";
    for(int i = 0; i < cnt; i++){
        cout << ans[i] << " ";
    }
    cout << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
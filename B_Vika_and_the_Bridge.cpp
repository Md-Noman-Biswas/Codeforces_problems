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

ll n, k;

bool predicate(ll mid, vector<ll> &arr){
    ll diff = 0;
    ll last = arr[mid - 1];
    for(int i = mid - 1; i < n; i += mid){
        if(arr[i] != last){
            diff++;
        }
        if(diff > 1) return false;
    }
    return true;
}

void solve(){
    cin >> n >> k;
    vector<ll> arr(n);
    map<ll, vector<ll>> mp;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mp[arr[i]].push_back(i + 1);
    }   

    ll ans = llmx;

    for(auto it: mp){
        auto temp = it.second;
        ll curr = temp[0] - 1;
        vector<ll> v;
        v.push_back(curr);
        v.push_back(n - temp[temp.size() - 1]); 
        for(int i = 1; i < temp.size(); i++){
            v.push_back(temp[i] - temp[i - 1] - 1);
        }
        sort(v.begin(), v.end());
        ans = min(ans, max(v[v.size() - 1] / 2, v[v.size() - 2]));
    }
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
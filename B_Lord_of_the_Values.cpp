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
    vector<ll> arr(n + 1);
    vector<pair<ll, pair<ll, ll>>> pr;
    for(int i = 1; i <= n; i++) cin >> arr[i];

    for(int i = 1; i <= n - 1; i += 2){
        ll x = i;
        ll y = i + 1;
        if(arr[i] == arr[i+1]){
            pr.push_back({2, {x, y}});
            pr.push_back({2, {x, y}});
            pr.push_back({1, {x, y}});
            pr.push_back({1, {x, y}});
        }else{
            pr.push_back({1, {x, y}});
            pr.push_back({2, {x, y}});
            pr.push_back({1, {x, y}});
            pr.push_back({2, {x, y}});
            pr.push_back({1, {x, y}});
            pr.push_back({2, {x, y}});
        }
    }   
    cout << pr.size() << nl;
    for(auto it: pr){
        cout << it.first << " " << it.second.first << " " << it.second.second << nl;
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
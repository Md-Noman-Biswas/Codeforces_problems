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

bool cmp(pair<ll, ll> a, pair<ll, ll> b){
    return a.first < b.first;
}

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> arr;

    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        arr.push_back({x, i});
    }

    sort(arr.begin(), arr.end(), cmp);

    vector<ll> brr(n);
    for(int i = 0; i < n; i++){
        cin >> brr[i];
    }
    sort(brr.begin(), brr.end());

    vector<ll> ans(n);
    for(int i = 0; i < n; i++){
        ans[arr[i].second] = brr[i];
    }

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
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
    if(p1.second == p2.second) return p1.first > p2.first;
    return p1.second < p2.second;
}

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    vector<ll> brr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    vector<pair<ll, ll>> pr;
    for(int i = 0; i < n; i++){
        cin >> brr[i];
        pr.push_back({arr[i], brr[i]});
    }
    sort(pr.begin(), pr.end(), cmp);

    // for(auto it: pr){
    //     cout << it.first << " " << it.second << nl;
    // }

    ll cost = k;
    ll cnt = 1;
    ll reserved_price = pr[0].second;
    ll reserved_cnt = pr[0].first;
    ll prev = 1;
    ll remaining = pr.size() - 1;
    for(int i = 1; i < pr.size(); ){
        ll cost_now = min(reserved_price, k);
        if(cost_now == k){
            cost += k;
            i++;
            remaining--;
        }else{
            ll will_give_now = min(reserved_cnt, remaining);
            cost += will_give_now * reserved_price;
            i += will_give_now;
            remaining -= will_give_now;
        }
        if(remaining <= 0) break;
        reserved_price = pr[prev].second;
        reserved_cnt = pr[prev].first;
        prev++;
        // cout << i << "-> " ;
        // cout << cost << nl;
    }
    cout << cost << nl;

}

/* Hey you should check this out
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * do something instead of nothing and stay organized
    * bruteforce to find pattern
    * DON'T GET STUCK ON ONE APPROACH
    * Think the problem backwards
    * In practice time don't see failing test case
*/

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
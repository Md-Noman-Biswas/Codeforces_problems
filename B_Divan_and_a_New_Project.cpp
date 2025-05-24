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
const int INF = 1e9 + 10;


bool cmp(pair<ll, ll> p1, pair<ll, ll> p2){
    return p1.first > p2.first;
}

void solve(){
    int n;
    cin >> n;
    vector<pair<ll, ll>> arr(n + 1);
    // arr[0].first = 0;
    // arr[0].second = 0;
    for(int i = 1; i <= n; i++){
        ll x;
        cin >> x;
        arr[i].first = x;
        arr[i].second = i;
    }

    sort(arr.begin(), arr.end(), cmp);

    // for(auto it: arr){
    //     cout << it.first << " " << it.second << nl;
    // }


    ll value = 1;
    vector<ll> ans(n + 1, 0);
    ll total = 0;
    for(int i = 0; i < n; i += 2){
        ans[arr[i].second] = value;
        total += 2 * value * arr[i].first;
        if(i + 1 < n){
            ans[arr[i + 1].second] = value * -1;
            total += 2 * value * arr[i + 1].first;
        }
        value++;
    }
    cout << total << nl;
    for(auto it: ans){
        cout << it << " ";
    }
    cout << nl;


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
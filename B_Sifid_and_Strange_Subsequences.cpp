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
    map<string, ll> mp;
    ll min_positive = llmx;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] < 0){
            mp["negative"]++;
        }
        else if(arr[i] > 0){
            mp["positive"]++;
            min_positive = min(min_positive, arr[i]);
        }else{
            mp["zero"]++;
        }
    }
    sort(arr.begin(), arr.end());
    ll min_diff = llmx - 1;
    for(int i = 0; i < n - 1; i++){
        if(arr[i + 1] <= 0){
            ll diff = abs(arr[i] - arr[i + 1]);
            min_diff = min(min_diff, diff);
        }
    }

    ll ans = mp["negative"] + mp["zero"];
    if(min_diff >= min_positive){
        ans++;
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
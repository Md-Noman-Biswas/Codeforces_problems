#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    ll n, s;
    cin >> n >> s;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    ll i = 0;
    ll j = 0;
    int segs = 0;
    ll sum = 0;
    ll ans = 0;
    int cnt = 0;
    while (j < n) {
        sum += arr[j];
        while (sum > s) {
            sum -= arr[i];
            i++;
        }
        ans += j - i + 1;
        j++;
    }
    cout << ans << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}

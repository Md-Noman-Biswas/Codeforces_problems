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

void solve(){
    ll n; 
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    vector<ll> pref(n);
    vector<ll> suff(n);
    pref[0] = arr[0];
    for (int i = 1; i < n; i++) pref[i] = pref[i - 1] + arr[i];
    suff[n- 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) suff[i] = suff[i + 1] + arr[i];

    // for (int i = 0; i < n; i++) {
    //     cout << pref[i] << " " << suff[i] << nl;
    // }

    ll q;
    cin >> q;
    while (q--) {
        ll def, att;
        cin >> def >> att;
        ll cnt = 0;
        auto it = lower_bound(arr.begin(), arr.end(), def);
        if (it == arr.end()) {
            it--;
            ll ind = it - arr.begin();
            ll current_mx = *it;
            if (current_mx < def) {
                cnt += def - current_mx;
            }
            ll rem_strength = pref[ind - 1];
            if (att > rem_strength) {
                cnt += att - rem_strength;
            }
            //cout << current_mx << " " << rem_strength << nl;
        }
        else if (it == arr.begin()) {
            ll ind = it - arr.begin();
            ll currnt_mx = *it;
            if (currnt_mx < def) {
                cnt += def - currnt_mx;
            }
            ll rem_strength = suff[ind + 1];
            if (att > rem_strength) {
                cnt += att - rem_strength;
            }
        }
        else {
            ll cnt1 = llmx;
            ll cnt2 = llmx;
            ll ind1 = it - arr.begin();
            it--;
            
            ll ind2 = it - arr.begin();
            //  cout << ind1 << nl;
            //  cout << ind2 << nl;
            ll current_mx1 = arr[ind1];
            if (current_mx1 < def) {
                cnt1 = def - current_mx1;
            }
            ll rem_strength1 = 0;
            if (ind1 - 1 >= 0) rem_strength1 += pref[ind1 - 1];
            if (ind1 + 1 != n) rem_strength1 += suff[ind1 + 1]; 
            if (att > rem_strength1) {
                if (cnt1 != llmx) cnt1 += att - rem_strength1;
                else cnt1 = att - rem_strength1;
            }

            ll current_mx2 = arr[ind2];
            if (current_mx2 < def) {
                cnt2 = def - current_mx2;
            }
            ll rem_strength2 = 0;
            if (ind2 - 1 >= 0) rem_strength2 += pref[ind2 - 1];
            if (ind2 + 1 != n) rem_strength2 += suff[ind2 + 1]; 
            if (att > rem_strength2) {
                if (cnt2 != llmx) cnt2 += att - rem_strength2;
                else cnt2 = att - rem_strength2;
            }
            // cout << rem_strength1 << " " << rem_strength2 << nl;
            // cout << cnt1 << " " << cnt2 << nl;
            if (cnt1 == llmx || cnt2 == llmx) {
                cnt = 0;
            }
            else {
                cnt = min(cnt1, cnt2);
            }
        }
        cout << cnt << nl;
    }

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
    solve();
    return 0;
}
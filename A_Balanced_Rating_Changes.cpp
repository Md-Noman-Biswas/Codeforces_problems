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
    vector<ll> arr(n), even, odd;
    ll sum = 0;
    ll pos = 0, neg = 0;
    ll odd_sum = 0;
    ll total = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += (arr[i] / 2);
    }   
    ll t = 0;
    if (total > 0) {
        for (int i = 0; i < n; i++) {
            if (total > 0) {
                if (arr[i] % 2 != 0 && arr[i] < 0) {
                    cout << -ceil((abs(arr[i]) * 1.0) / (2 * 1.0)) << nl;
                    t += -ceil(arr[i] / (2 * 1.0));
                    total--;
                    continue;
                } 
                else {
                    cout << arr[i] / 2 << nl;
                    t += arr[i] / 2; 
                }
            }
            else {
                cout << arr[i] / 2 << nl;
                t += arr[i] / 2;
            }
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            if (total < 0) {
                if (arr[i] % 2 != 0 && arr[i] > 0) {
                    cout << ceil((abs(arr[i]) * 1.0) / (2 * 1.0)) << nl;
                    total++;
                    continue;
                } 
                else {
                    cout << arr[i] / 2 << nl;
                    t += arr[i] / 2; 
                }
            }
            else {
                cout << arr[i] / 2 << nl;
                t += arr[i] / 2;
            }
        }
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
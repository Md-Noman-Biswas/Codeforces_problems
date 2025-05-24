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
    ll total_alice = 0;
    ll total_bob = 0;
    ll last_alice_ind = llmn;
    ll last_bob_ind = llmx;
    ll last_alice = 0;
    ll last_bob = 0;
    ll i = 0, j = n - 1;
    ll total_move = 0;
    while (i <= j) {
        ll curr_alice = 0;
        while (curr_alice <= last_bob && i < last_bob_ind) {
            curr_alice += arr[i];
            last_alice_ind = i;
            i++;
        }
        total_move++;
        last_alice = curr_alice;
        total_alice += curr_alice;
        if (i >= last_bob_ind) break;

        ll curr_bob = 0;
        while (curr_bob <= last_alice && j > last_alice_ind) {
            curr_bob += arr[j];
            last_bob_ind = j;
            j--;
        }
        total_move++;
        last_bob = curr_bob;
        total_bob += curr_bob;
        // cout << curr_alice << " " << curr_bob << nl;
        if (j <= last_alice_ind) break;
    }
    if (n == 1) total_move = 1;
    cout << total_move << " " << total_alice << " " << total_bob << nl;;
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
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

ll kadanes_algo(vector<ll>& arr, ll start, ll end) {
    ll best = llmn;
    ll past = 0;
    for (int i = start; i <= end; i++) {
        if (past + arr[i] >= arr[i]) {
            past += arr[i];
        }
        else {
            past = arr[i];
        }
        best = max(best, past);
    }
    return best;
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll yasser = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        yasser += arr[i];
    }
    ll abdel = max(kadanes_algo(arr, 0, n - 2), kadanes_algo(arr, 1, n - 1));
    
    if (yasser > abdel) {
        YES;
    }
    else {
        NO;
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
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
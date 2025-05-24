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

int countSortedSubarrays(vector<double>& dist, int k) {
    int n = dist.size();
    int cnt = 0; 
    int l = 0, r = 1, sz = 1;
    while (r < dist.size()) {
        if (dist[r - 1] < dist[r]) {
            sz++;
        }
        else {
            l = r;
            sz = 1;
        }
        if (sz == k) {
            cnt++;
            l++;
            sz--; 
        }
        r++;
    }
    return cnt;
}

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    vector<double> dist;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        dist.push_back(double(log2(arr[i])));
    }


    for (int i = 0; i < dist.size(); i++) {
        dist[i] += i;
    }

    cout << countSortedSubarrays(dist, k + 1) << nl;
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
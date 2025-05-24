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
    map<ll, ll> mp;
    map<ll, ll> mpp;
    deque<ll> even, odd;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) even.push_back(arr[i]);
        else odd.push_back(arr[i]);
        mpp[arr[i] % 2]++;
    } 

    if ((mpp[0] % 2 == 0) && (mpp[1] % 2 == 0)) {
        YES;
        return;
    }

    sort(arr.begin(), arr.end());
    vector<ll> hsh(n, -1);
    for (int i = 0; i < n - 1; i++) {
        if ((arr[i + 1] - arr[i] == 1) && hsh[i] != 1) {
            hsh[i + 1] = 1;
            hsh[i] = 1;
        }
    }
    vector<ll> trim;
    for (int i = 0; i < n; i++) {
        if (hsh[i] == 1) {
            trim.push_back(arr[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (hsh[i] != 1) {
            //cout << arr[i] << " ";
            mp[arr[i] % 2]++;
        }
    }

    if (((mp[0] % 2 == 0) && (mp[1] % 2 == 0))) {
        YES;
    } 
    else if ((mp[0] % 2 == 1) && (mp[1] % 2 == 1) && trim.size() > 1) {
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
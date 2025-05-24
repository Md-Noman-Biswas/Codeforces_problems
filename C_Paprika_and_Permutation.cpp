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
    vector<ll> hsh(n + 1, -1);
    map<ll, ll> mp;
    queue<ll> q;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        if (arr[i] <= n && mp[arr[i]] == 1) {
            hsh[arr[i]] = arr[i];
        }
        else {
            mp[arr[i]]--;
            q.push(arr[i]);
        }
    }

    // for (int i = 1; i <= n; i++) cout << hsh[i] << " ";
    // cout << nl;

    ll cnt = 0;
    bool flag = true;
    for (int i = 1; i <= n; i++) {
        if (hsh[i] == -1) {
            ll top = q.front();
            q.pop();
            ll need = i;
            ll temp = top / 2;
            temp++;
            cnt++;
            ll can_get = top % temp;
            if (can_get < need) {
                flag = false;
                break;
            }
        }
    }   
    if (flag) {
        cout << cnt << nl;
    }
    else {
        cout << -1 << nl;
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
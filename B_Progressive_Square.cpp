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
    ll n, c, d;
    cin >> n >> c >> d;
    vector<ll> arr(n * n);
    map<ll, ll> mp;
    for(int i = 0; i < n * n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    sort(arr.begin(), arr.end());
    ll mn = arr[0];
    ll top = arr[0];
    ll now;
    for(int i = 0; i < n; i++){
        top = mn + i * c;
        now = top;
        if(mp[now] == 0){
            cout << "NO" << nl;
            return;
        }
        for(int j = 0; j < n; j++){
            now = top + j * d;
            if(mp[now] == 0){
                cout << "NO" << nl;
                return;
            }
            mp[now]--;
        }
    }
    cout << "YES" << nl;
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
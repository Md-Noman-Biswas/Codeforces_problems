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
    vector<vector<ll>> arr(n, vector<ll> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            char ch;
            cin >> ch;
            arr[i][j] = (int)ch - '0';
        }
    }
    ll ope = 0;
    for(int i = 0; i < n / 2; i++){
        for(int j = i; j < n - i - 1; j++){
            vector<ll> xd;
            ll one = 0;
            ll zero = 0;
            xd.push_back(arr[i][j]);
            xd.push_back(arr[j][n - i - 1]);
            xd.push_back(arr[n - i - 1][n - j - 1]);
            xd.push_back(arr[n - j - 1][i]);
            for(auto it: xd){
                if(it == 1) one++;
                else zero++;
            }
            ope += min(one, zero);
        }
    }
    cout << ope << nl;
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
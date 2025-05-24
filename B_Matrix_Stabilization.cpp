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
    ll n, m;
    cin >> n >> m;
    ll arr[n + 2][m + 2] = {0};
    
    for(int i = 0; i < n + 2; i++){
        for(int j = 0; j < m + 2; j++){
            arr[i][j] = llmn;
        }
    }  

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 1; i <= n; i++){
        map<ll, ll> mp;
        ll temp = llmn;
        ll mx = llmn;
        for(int j = 1; j <= m; j++){
            mp[arr[i + 1][j]]++;
            mp[arr[i - 1][j]]++;
            mp[arr[i][j + 1]]++;
            mp[arr[i][j - 1]]++;
            temp = max(arr[i + 1][j], temp);
            temp = max(arr[i - 1][j], temp);
            temp = max(arr[i][j + 1], temp);
            temp = max(arr[i][j - 1], temp);
            if(arr[i + 1][j] != llmx) mx = max(arr[i + 1][j], mx);
            if(arr[i - 1][j] != llmx) mx = max(arr[i - 1][j], mx);
            if(arr[i][j + 1] != llmx) mx = max(arr[i][j + 1], mx);
            if(arr[i][j - 1] != llmx) mx = max(arr[i][j - 1], mx);
            mx = max(arr[i][j], mx);
            if(mx == arr[i][j]){
                arr[i][j] = temp;
            }
            mp.clear();   
            mx = llmn;
            temp = llmn;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << arr[i][j] << " ";
        }
        cout << nl;
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
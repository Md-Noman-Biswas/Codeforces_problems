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
    vector<ll> arr(n + 1);
    bool one = false;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(arr[i] == 1){
            one = true;
        }
    }
    if(!one){
        NO;
        return;
    }
    sort(arr.begin(), arr.end());
    vector<ll> pref(n + 1);
    pref[0] = 0;
    for(int i = 1; i <= n; i++){
        pref[i] = pref[i - 1] + arr[i];
    }   
    bool flag = true;
    for(int i = 2; i <= n; i++){
        if(pref[i - 1] < arr[i]){
            flag = false;
        }
    }
    if(flag) YES;
    else NO;
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
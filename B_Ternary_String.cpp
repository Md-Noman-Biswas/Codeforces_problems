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

void solve(){
    string s;
    cin >> s;
    ll l = 0;
    ll r = 0;
    vector<ll> arr(4, 0);
    bool flag = false;
    ll n = s.size();
    ll ans = llmx;
    while(1){
        if(r == n || l == n) break;
        while(r < n){
            arr[s[r] - '0']++;
            r++;
            if(arr[1] && arr[2] && arr[3]){
                flag = true;
                break;
            }
        }
        while(arr[1] && arr[2] && arr[3]){
            ans = min(ans, r - l);
            arr[s[l] - '0']--;
            l++;
        }
    }
    
    if(flag){
        cout << ans << nl;
    }else{
        cout << 0 << nl;
    }

}

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
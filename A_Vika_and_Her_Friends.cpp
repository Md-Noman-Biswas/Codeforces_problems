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
    ll x, y, k, x1, y1;
    cin >> x >> y >> k;
    cin >> x1 >> y1;
    bool flag = true;
    while(k--){
        ll t1, t2;
        cin >> t1 >> t2;
        if(((x1 + y1) & 1) == ((t1 + t2) & 1)){
            flag = false;
        }
    }

    if(flag) YES;
    else NO;

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
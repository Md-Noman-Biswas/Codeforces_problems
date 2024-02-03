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

void solve() {
    ll n, k;
    cin >> n >> k;
    ll temp = k;
    if(k > n){
        NO;
        return;
    }
    if(!(n&1)) {
        if(n == k){
            YES;
            while(k--){
                cout << 1 << " ";
            }
            cout << nl;
            return;
        }
        if(k > n/2) {
            if(k % 2 == 0){
                YES;
                while(k > 1){
                    cout << 1 << " ";
                    k--;
                }
                cout << n - (temp - 1) << nl;
            }else{
                NO;
            }
            return;
        }
        YES;
        while(k > 1) {
            cout << 2 << " ";
            k--;
        }
        cout << n - (temp - 1) * 2 << nl;
    } else {
        if(k&1) {
            YES;
            while(k > 1) {
                cout << 1 << " ";
                k--;
            }
            cout << n - (temp - 1) << nl;
        }else{
            NO;
        }
    }
}

signed main() {
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
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
    ll n, k, x;
    cin >> n >> k >> x;
    if(x != 1){
        YES;
        cout << n << nl;
        for(int i = 0; i < n; i++){
            cout << 1 << " ";
        }
        cout << nl;;
    }
    else if(x == 1){
        if(k >= 2){
            if(n % 2 == 0){
                YES;
                cout << n / 2 << nl;
                for(int i = 0; i < n / 2; i++){
                    cout << 2 << " ";
                }
                cout << nl;
            }else{
                if(k >= 3){
                    YES;
                    cout << (n - 3) / 2 + 1 << nl;
                    for(int i = 0; i < (n - 3) / 2; i++){
                        cout << 2 << " ";
                    }
                    cout << 3 << nl;
                }else{
                    NO;
                }
            }
        }else{
            NO;
        }
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
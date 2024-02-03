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
    ll n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    ll initial = 0;
    bool flag = true;
    for(int i = 0; i < n; i++){

        f -= (min(b, (arr[i]- initial)* a));
        initial = arr[i];
        if(f <= 0){
            flag = false;
            break;
        }
    }   
    if(flag){
        YES;
    }else{
        NO;
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
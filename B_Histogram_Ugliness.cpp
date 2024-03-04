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
    ll n;
    cin >> n;
    vector<ll> arr(n + 2, 0);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    ll ope = 0;
    for(int i = 1; i <= n; i++){
        if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]){
            ll temp = max(arr[i + 1], arr[i - 1]);
            ope += arr[i] - temp;
            arr[i] = temp;
        }
    }

    ll total = 0;
    for(int i = 1; i <= n + 1; i++){
        total += abs(arr[i] - arr[i - 1]);
    }
    cout << total + ope << nl;
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
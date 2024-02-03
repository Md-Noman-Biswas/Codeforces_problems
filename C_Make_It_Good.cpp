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
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    ll i = n - 1;
    bool flag1 = true;
    bool flag2 = true;
    ll cnt = 0;

    while(i > 0){
        if(arr[i] <= arr[i-1]){
            cnt++;
            i--;
        }else{
            break;
        }
    }   

    while(i > 0){
        if(arr[i] >= arr[i-1]){
            cnt++;
            i--;
        }else{
            break;
        }
    }
    cout << n - cnt - 1 << nl;
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
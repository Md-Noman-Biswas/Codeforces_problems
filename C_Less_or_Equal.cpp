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
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    // for(auto it: arr){
    //     cout << it << " ";
    // }
    // cout << nl;
    ll cnt = 0;
    if(k == 0){
        if(arr[0] == 1){
            cout << -1 << nl;
        }else{
            cout << arr[0] - 1 << nl;
        }
        return;
    } 
    if(arr[k-1] != arr[k]){
        cout << arr[k-1] << nl;
    }else{
        cout << -1 << nl;
    }

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
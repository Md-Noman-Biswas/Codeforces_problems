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
    ll xd1 = 0, xd2 = 1;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    ll mn = llmx;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i + 1]){
            xd1 = i;
            xd2 = i + 1;
            break;
        }
        else if(arr[i + 1] - arr[i] < mn){
            mn = arr[i + 1] - arr[i];
            xd1 = i;
            xd2 = i + 1;
        }
    }
    vector<ll> ans;
    ans.pb(arr[xd1]);
    for(int i = xd2; i < n; i++){
        if(i != xd1 && i != xd2){
            ans.pb(arr[i]);
        }
    }
    for(int i = 0; i <= xd1; i++){
        if(i != xd1 && i != xd2){
            ans.pb(arr[i]);
        }
    }
    ans.pb(arr[xd2]);
    for(auto it: ans){
        cout << it << " ";
    }
    cout <<nl;
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
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
    vector<ll> arr(n + 2);
    for(int i = 0; i < n + 2; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    ll sum = 0;
    bool flag = false;
    ll target = arr[n + 2 - 1];
    vector<ll> ans;

    ll temp = 0;
    for(int i = 0; i < n; i++){
        temp += arr[i];
    }

    if(temp == arr[n] || temp == arr[n + 1]){
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << nl;
        return;
    }

    temp += arr[n];
    ll index = -1;
    for(int i = 0; i < n; i++){
        if(temp - arr[i] == target){
            index = i;
            break;
        }
    }
    if(index != -1){
        for(int i = 0; i <= n; i++){
            if(i != index){
                cout << arr[i] << " ";
            }
        }
        cout << nl;
    }else{
        cout << -1 << nl;
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
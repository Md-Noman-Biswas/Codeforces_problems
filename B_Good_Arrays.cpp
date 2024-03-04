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
    ll sum = 0;
    ll cnt = 0;
    ll one = 0;
    map<ll, ll> mp;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > 1){
            sum += arr[i];
            cnt++;
        }
        if(arr[i] == 1) one++;
        mp[arr[i]]++;
    }   

    sum -= cnt;

    if(one > sum || n == 1) NO;
    else YES;
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
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
    vector<ll> brr(k);
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int j = 0; j < k; j++) cin >> brr[j];

    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    reverse(brr.begin(), brr.end());

    ll l = 0;
    ll r = 0;
    ll diff = 0;

    ll xd1;
    ll xd2;
    ll cnt = 0;
    while(cnt < n){
        xd1 = abs(arr[l] - brr[r]);
        xd2 = abs(arr.back() - brr.back());
        if(xd1 > xd2){
            diff += xd1;
            l++;
            r++;
        }else{
            diff += xd2;
            arr.pop_back();
            brr.pop_back();
        }
        cnt++;
    }

    // while(l < n/2){
    //     diff += abs(arr[l] - brr[r]);
    //     l++;
    //     r--;
    // }

    // r = n-1;
    // l = 0;
    // while(r >= n/2){
    //     diff += abs(arr[r] - brr[l]);
    //     l++;
    //     r--;
    // }
    cout << diff << nl;
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
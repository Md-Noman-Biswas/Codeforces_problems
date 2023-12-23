#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);

    for(int i=0; i<n; i++) cin >> arr[i];
    int i = 0;
    ll min_sum = INT_MAX;
    ll index = 0;
    ll window_sum = 0;
    for(int i=0; i<k; i++) window_sum += arr[i];
    min_sum = window_sum;
    for(int i=k; i<n; i++){
        window_sum += arr[i] - arr[i-k];

        if(window_sum <= min_sum){
            min_sum = window_sum;
            index = i-k+1;
        }
    }
    //cout << min_sum << nl;
    cout << ++index << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
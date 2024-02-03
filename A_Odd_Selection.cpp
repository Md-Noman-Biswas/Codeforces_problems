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
    ll totalSum = 0;
    ll even = 0;
    ll odd = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        totalSum += arr[i];
        if(arr[i] & 1) odd++;
        else even++;
    }   

    if(odd == 0){
        NO;
        return;
    }

    for(int i=1; i<=odd; i += 2){
        if(i > k) break;
        if(k - i <= even){
            YES;
            return;
        }
    }

    NO;
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
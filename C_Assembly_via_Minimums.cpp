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
    map<ll, ll> mp;
    ll sz = n * (n - 1) / 2;
    vector<ll> arr(sz);

    for(int i = 0; i < sz; i++){
        cin >> arr[i];
    }   
    sort(arr.begin(), arr.end());
    ll ind = 0;
    ll leap = n - 1;
    
    for(int ind = 0; ind < sz; ){
        cout << arr[ind] << " ";
        ind += leap;
        leap--;
    }
    cout << arr.back() << nl;
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
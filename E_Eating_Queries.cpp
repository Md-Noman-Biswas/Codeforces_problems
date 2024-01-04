#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

bool cmp(int x, int y){
    return x > y;
}

void solve(){
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    vector<ll> pref(n);

    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end(), cmp);

    pref[0] = arr[0];
    for(int i=1; i<n; i++){
        pref[i] = pref[i-1] + arr[i];
    }
    
    while(q--){
        ll x;
        cin >> x;
        if(x > pref.back()){
            cout << -1 << nl;
        }else{
            cout << (lower_bound(pref.begin(), pref.end(), x) - pref.begin()) + 1 << nl;
        }
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
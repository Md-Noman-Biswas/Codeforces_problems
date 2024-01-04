#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;
vector<ll> hsh(N, 0);

void solve(){
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<ll> suff(n, 1);
    vector<ll> suffix(n+1, 0);

    for(int i=n-1; i>=0; i--){
        if(hsh[arr[i]] == 1){
            suff[i] = 0;
        }
        hsh[arr[i]] = 1;
    }

    suffix[n-1] = suff[n-1];
    for(int i=n-2; i>=0; i--){
        suffix[i] = suffix[i+1] + suff[i];
    }

    while(q--){
        ll x;
        cin >> x;
        cout << suffix[--x] << nl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
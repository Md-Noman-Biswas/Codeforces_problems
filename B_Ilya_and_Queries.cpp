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
    string s;
    cin >> s;
    ll n = s.size();
    vector<ll> arr(n, 0);
    vector<ll> pref(n, 0);
    for(int i=1; i<n; i++){
        if(s[i] == s[i-1]){
            arr[i] = 1;
        }
    }
    pref[0] = arr[0];
    for(int i=1; i<n; i++){
        pref[i] = pref[i-1] + arr[i];
    }
    
    ll q;
    cin >> q;
    while(q--){
        ll l, r;
        cin >> l >> r;
        cout << pref[r-1] - pref[l-1] << nl;
    }   
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
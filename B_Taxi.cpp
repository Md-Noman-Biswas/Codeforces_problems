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
    ll n;
    cin >> n;
    map<ll, ll> mp;
    for(int i=0; i<n; i++){
        ll x;
        cin >> x;
        mp[x]++;
    }
    int cnt = 0;
    cnt += mp[4];

    if(mp[3] < mp[1]){
        cnt += mp[3];
        mp[1] -= mp[3];
        mp[3] = 0;
    }else{
        cnt += mp[1];
        mp[3] -= mp[1];
        mp[1] = 0;
    }

    if(mp[3] > 0){
        cnt += mp[3];
        mp[3] = 0;
    }

    if(mp[2] > 0){
        cnt += mp[2]/2;
        mp[2] = (mp[2] % 2);
    }

    ll left = mp[1] + 2*mp[2];
    cnt += ceil(left/4.0);

    cout << cnt << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
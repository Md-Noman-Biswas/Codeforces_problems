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
    map<ll, ll> mp;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    ll cnt = 0;
    if(mp.size() > 2){
        for(auto it = next(mp.begin()); it != prev(mp.end()); it++){
        cnt += it->second;
    }
    }
    cout << cnt << nl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
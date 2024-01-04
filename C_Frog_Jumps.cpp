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
    ll cons = 0;
    ll mx = 0;
    map<char, ll> mp;
    ll n = s.size();
    for(int i=0; i<n; i++){
        cons++;
        if(i == n-1 || s[i] != s[i+1]){
            if(mp.find(s[i]) == mp.end()){
                mp[s[i]] = cons;
            }else{
                mp[s[i]] = max(mp[s[i]], cons);
            }
            cons = 0;
        }
    }
    cout << ++mp['L'] << nl;
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
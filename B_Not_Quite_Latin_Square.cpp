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
    string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c; 
    string s = a + b + c;
    map<ll, ll> mp;
    for(int i=0; i<s.size(); i++){
        if(isalpha(s[i])){
            mp[s[i]]++;
        }
    }
    char ans = 0;
    for(auto it: mp){
        if(it.second == 2){
            ans = it.first;
        }
    }
    cout << ans << nl;
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
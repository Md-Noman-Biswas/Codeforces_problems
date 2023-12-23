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
    map<char, int> mp;
    map<char, int> mps;
    string s;
    cin >> s;
    for(int i='A'; i<='Z'; i++){
        mp[char(i)] = i-'A' + 1;
    }
    for(int i=0; i<s.size(); i++){
        mps[s[i]]++;
    }
    int cnt = 0;
    for(auto it: mps){
        char x = it.first;
        if(it.second >= mp[x]){
            cnt++;
        }
    }
    cout << cnt << nl;
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
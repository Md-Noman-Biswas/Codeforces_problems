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
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, ll> mp;
    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
    }
    cout << abs(mp['0'] - mp['1']) << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
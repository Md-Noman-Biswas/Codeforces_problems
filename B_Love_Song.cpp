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
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    map<char, ll> mp;
    vector<ll> hsh(27);
    for(int i = 1; i <= 26; i++){
        hsh[i] = i; 
    }
    ll sz = s.size();
    vector<ll> xd(sz + 1);
    for(int i = 0; i < sz; i++){
        xd[i + 1] = hsh[s[i] - 'a' + 1];
    }

    vector<ll> pref(sz + 1, 0);
    for(int i = 1; i <= sz; i++){
        pref[i] = xd[i] + pref[i - 1];
    }
    
    while(q--){
        ll l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << nl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
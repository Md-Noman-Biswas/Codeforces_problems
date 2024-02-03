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
    vector<ll> neg;
    vector<ll> pos;
    ll ans = 1;
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        if(i < 5) ans *= x;
        if(x < 0) neg.pb(x);
        else pos.pb(x);
    }   
    
    if(n == 5){
        cout << ans << nl;
        return;
    }
    sort(neg.begin(), neg.end());
    sort(pos.begin(), pos.end());
    reverse(pos.begin(), pos.end());

    ll mx = llmn;
    ll total = 1;

    if(neg.size() >= 4 && pos.size() > 0){
        for(int i = 0; i < 4; i++){
            total *= neg[i];
        }
        total *= pos[0];
        mx = max(total, mx);
    }
    total = 1;
    if(neg.size() >= 2 && pos.size() >= 3){
        for(int i = 0; i < 2; i++){
            total *= neg[i];
        }
        for(int i = 0; i < 3; i++){
            total *= pos[i];
        }
        mx = max(total, mx);
    }
    total = 1;
    if(pos.size() >= 5){
        for(int i = 0; i < 5; i++){
            total *= pos[i];
        }
        mx = max(total, mx);
    }
    total = 1;
    if(pos.size() == 0){
        reverse(neg.begin(), neg.end());
        for(int i = 0; i < 5; i++){
            total *= neg[i];
        }
        mx = max(total, mx);
    }

    cout << mx << nl;
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
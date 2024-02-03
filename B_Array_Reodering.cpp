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
    vector<ll> even;
    vector<ll> odd;
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        if(x % 2 == 0){
            even.pb(x);
        }else{
            odd.pb(x);
        }
    }   

    ll ans = 0;
    ll points = n - 1;
    for(int i = 0; i < even.size(); i++){
        ans += points;
        points--;
    }

    sort(odd.begin(), odd.end());
    for(int i = 0; i < odd.size(); i++){
        for(int j = i + 1; j < odd.size(); j++){
            if(__gcd(odd[i], 2 * odd[j]) > 1) ans++;
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
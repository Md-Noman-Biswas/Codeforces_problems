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
    ll d, total;
    cin >> d >> total;
    vector<pair<ll, ll>> pr;
    ll min_sum = 0;
    ll max_sum = 0;

    for(int i = 0; i < d; i++){
        ll x, y;
        cin >> x >> y;
        pr.pb({x, y});
        min_sum += x;
        max_sum += y;
    }

    if(min_sum > total || max_sum < total){
        NO;
    } else {
        YES;
        ll rem = total - min_sum;

        for(auto it : pr){
            ll extra = min(it.second - it.first, rem);
            cout << it.first + extra << " ";
            rem -= extra;
        }
        cout << nl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}

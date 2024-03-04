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
    ll n, m, k;
    cin >> n >> m >> k;
    set<ll> st1;
    set<ll> st2;
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        if(x <= k) st1.insert(x);
    }

    for(int i = 0; i < m; i++){
        ll y;
        cin >> y;
        if(y <= k) st2.insert(y);
    }

    if(st1.size() < k / 2 ||  st2.size() < k / 2){
        NO;
        return;
    }

    bool flag = true;
    for(int i = 1; i <= k; i++){
        if(st1.find(i) == st1.end() && st2.find(i) == st2.end()){
            flag = false;
            break;
        }
    }

    if(flag) YES;
    else NO;


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
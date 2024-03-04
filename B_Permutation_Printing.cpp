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

    vector<ll> ans;
    ll x = 1;
    ll d = n;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            ans.push_back(x);
            x++;
        }else{
            ans.push_back(d);
            d--;
        }
    }

    for(auto it: ans){
        cout << it << " ";
    }
    cout << nl;
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
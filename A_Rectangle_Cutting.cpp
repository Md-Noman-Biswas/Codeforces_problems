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
    ll a, b;
    cin >> a >> b;
    set<pair<ll, ll>> st;
    if(a % 2 == 0){
        ll temp1 = a / 2;
        ll temp2 = b + b;
        st.insert({temp1, temp2});
    }
    if(b % 2 == 0){
        ll temp3 = b / 2;
        ll temp4 = a + a;
        st.insert({temp3, temp4});
    }
    bool flag = true;
    pair<ll, ll> p1 = {a, b};
    pair<ll, ll> p2 = {b, a};

    ll cnt = 0;

    for(auto it: st){
        if(it == p1){
            flag = false;
            cnt++;
        }
        if(it == p2){
            flag = false;
            cnt++;
        }
    }

    if(!flag){
        if(cnt < st.size()){
            flag = true;
        }
    }

    if(flag && st.size() != 0) YES;
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
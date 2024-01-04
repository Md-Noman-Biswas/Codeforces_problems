#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

unordered_set<ll> st;
void pre(){
    for(ll i=1; i<=1e4; i++){
        st.insert(i*i*i);
    }
}

void solve(){
    ll n;
    cin >> n;
    for(ll i=1; i<=1e4; i++){
        ll temp = (n - i*i*i);
        if(temp < 0) break;
        auto it = st.find(temp);
        if(it != st.end()){
            YES;
            return;
        }
    }   
    NO;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    pre();
    while(t--) {
        solve();
    }
    return 0;
}
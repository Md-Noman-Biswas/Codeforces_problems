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

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    ll min_even = 0;
    ll min_odd = 0;
    ll max_even = 0;
    ll max_odd = 0;
    
    if(even.size() == 0 || odd.size() == 0){
        YES;
        return;
    }
    if(even.size() > 0){
        min_even = even.front();
        max_even = even.back();
    }

    if(odd.size() > 0){
        min_odd = odd.front();
        max_odd = odd.back();
    }

    if (min_even > min_odd && max_even > min_odd) {
    YES;
    } else {
    NO;
    }

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
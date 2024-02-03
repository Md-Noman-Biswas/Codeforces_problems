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

vector<ll> divisors;

void count_div(ll n){
    for(ll i = 1; i*i <= n; i++){
        if(n % i == 0){
            divisors.pb(i);
            if(n/i != i) divisors.pb(n/i);
        }
    }
}

void solve(){
    ll n, k;
    cin >> n >> k;
    count_div(n);  
    sort(divisors.begin(), divisors.end());
    if(divisors.size() >= k){
        cout << divisors[k-1] << nl;
    }else{
        cout << -1 << nl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
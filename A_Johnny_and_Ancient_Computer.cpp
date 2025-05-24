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
const int INF = 1e9 + 10;


ll optimize(ll n){
    ll eight = 0;
    ll four = 0;
    ll two = 0;
    while(n - 3 >= 0){
        n -= 3;
        eight++;
    }
    if(n == 0) return eight;
    
    while(n - 2 >= 0){
        n -= 2;
        four++;
    }
    if(n == 0) return four + eight;
    two = n;
    return (eight + four + two);
}

void solve(){
    ll n, k;
    cin >> n >> k;
    ll div_by_2 = 0;
    ll multiply_by_2 = 0;
    if(k == n){
        cout << 0 << nl;
        return;
    }
    if(k < n){
        if(k > n / 2){
            cout << "-1" << nl;
            return;
        }
        while(n % 2 == 0 && n > k){
            n /= 2;
            div_by_2++;
        }
    }   
    if(k > n){
        if(k < n * 2){
            cout << -1 << nl;
            return;
        }
        while(n < k){
            n *= 2;
            multiply_by_2++;
        }
    }
    if(n != k){
        cout << -1 << nl;
        return;
    }
    //cout << div_by_2 << nl;
    ll ope = multiply_by_2 + div_by_2;
    cout << optimize(ope) << nl;
}

/* Hey you should check this out
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * do something instead of nothing and stay organized
    * bruteforce to find pattern
    * DON'T GET STUCK ON ONE APPROACH
    * Think the problem backwards
    * In practice time don't see failing test case
*/

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
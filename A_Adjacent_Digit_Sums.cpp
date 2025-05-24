#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "Yes\n"
#define NO cout << "No\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

ll digit_sum(ll n) {
    ll temp = n;
    ll sum = 0;
    while (temp) {
        sum += temp % 10;
        temp /= 10;
    }
    return sum;
}

void solve(){
    ll x, y;
    cin >> x >> y;

    if (y >= x) {
        if (y - x == 1) {
            YES;
        }
        else {
            NO;
        }
        return;
    }
    else {
        ll rem = digit_sum(y);
        if ((x - (rem - 1)) % 9 == 0) YES;
        else NO;
    }
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
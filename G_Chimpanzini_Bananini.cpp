#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define db cout << "h"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

void solve(){
    ll n;
    cin >> n;
    ll flag = 1;
    deque<ll> dq;
    ll sum = 0;
    ll score = 0;
    ll ind = 0;
    while (n--) {
        ll type;
        cin >> type;
        if (type == 3) {
            ll v;
            cin >> v;
            ind++;
            sum += v;
            if (flag) dq.push_back(v);
            else dq.push_front(v);
        }
        else if (type == 2) {
            if (flag) {
                score += sum - dq.front();
            }
            else {
                score += sum - dq.back();
            }
        }
        else {
            flag ^= 1;
            ll new_score = 0;
            for (int i = ind - 1; i >= 0; i--) {
                new_score += dq[i] * (i + 1);
            }
        }
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
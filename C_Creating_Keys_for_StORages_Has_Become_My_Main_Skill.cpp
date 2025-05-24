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

void printBinary(int num){
    for(int i=10; i>=0; i--){
        cout << ((num >> i) & 1); //it takes ith bit to 0th position
        //we can count bit in this way too using ct += (num>>i)&1
    }
    cout << "\n";
}

void solve(){
    ll n, x;
    cin >> n >> x;
    if (n == 1) {
        cout << x << nl;
        return;
    }
    // for (int i = 0; i <= 20; i++) {
    //     printBinary(i);
    // }

    if (!(x & (x - 1))) {
        cout << 0 << " ";
        for (int i = 1; i < n; i++) {
            cout << x << " ";
        }
        return;
    }

    ll temp = 1;
    while (temp * 2 < x) {
        temp *= 2;
    }
    // cout << temp << nl;

    ll v = temp;
    ll last = 0;
    vector<ll> ans;
    ans.push_back(temp);
    ll cnt = 1;
    for (int i = 0; i <= n; i++) {
        if (i == temp) continue;
        if (cnt >= n) break;
        if ((v | i) <= x) {
            v |= i;
            cnt++;
            ans.push_back(i);
            last = i;
        }
        else {
            for (int j = cnt + 1; j <= n; j++) {
                ans.push_back(last);
                v |= last;
            }
            break;
        }
    }
    sort(ans.begin(), ans.end());
    
    if (v != x) {
        ans.clear();
        ans.push_back(x);
        ll v = x;
        ll cnt = 1;
        for (int i = 0; i <= n; i++) {
            if (cnt >= n) break;
            if ((v | i) <= x) {
                v |= i;
                cnt++;
                ans.push_back(i);
            }
            else {
                for (int j = cnt; j <= n - 1; j++) {
                    ans.push_back(x);
                }
                break;
            }
        }
        // cout << v << nl;
    }
    for (auto it: ans) cout << it << " ";
    cout << nl;
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
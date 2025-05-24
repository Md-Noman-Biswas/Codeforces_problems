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

void solve(){
    ll n;
    cin >> n;
    deque<ll> dq1;
    deque<ll> dq2;
    for (int i = 0; i < n; i++) {
        ll temp;
        cin >> temp;
        dq1.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        ll temp;
        cin >> temp;
        dq2.push_back(temp);
    }
    ll temp = n - 1;
    bool flag = false;
    while (temp--) {
        set<ll> st;
        st.insert(dq1.front());
        st.insert(dq2.front());
        st.insert(dq1.back());
        st.insert(dq2.back());
        if (st.size() == 2) {
            ll temp = dq1.front();
            dq1.pop_front();
            if (temp == dq2.front()) {
                dq2.pop_front();
            }
            else {
                dq2.pop_back();
            }
        }
        else  {
            flag = true;
            break;
        }
    }

    if (flag) {
        cout << "Alice" << nl;
        return;
    }

    if (dq1[0] != dq2[0]) {
        cout << "Alice" << nl;
    }
    else {
        cout << "Bob" << nl;
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define db cout << "h"
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e4 + 7;
const int INF = 1e9 + 10;

int a[N];//populate it in main function

struct ST {
    long long t[4 * N];
    #define lc (n << 1)//2n
    #define rc ((n << 1) | 1)//2n + 1

    inline long long combine(long long a,long long b) {
        return min(a, b);
    }

    inline void pull(int n) {
        t[n] = min(t[lc], t[rc]);
    }

    void build(int n, int b, int e) {
        if (b == e) {
            t[n] = a[b];
        return;
        }
        int mid = (b + e) >> 1;
        build(lc, b, mid);
        build(rc, mid + 1, e);
        pull(n);
    }

    void upd(int n, int b, int e, int i, int x) {
        if (b > i || e < i) return;
        if (i == b && e == i) {
            t[n] = x;
            return;
        }
        int mid = (b + e) >> 1;
        upd(lc, b, mid, i, x);
        upd(rc, mid + 1, e, i, x);
        pull(n);
    }

    long long query(int n, int b, int e, int i, int j) {
        if (i > e || b > j) return INT_MAX; //return null
        if (i <= b && e <= j) return t[n];
        int mid = (b + e) >> 1;
        return combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));
    }
};

/*  //example:
    ST st;
    st.build(1, 1, n);
    cout << st.query(1, 1, n, 1, 5) << "\n";
    st.upd(1, 1, n, 1, 0);
    cout << st.query(1, 1, n, 1, 5) << "\n";
*/

void solve(){
    ll n, q;
    cin >> n >> q;
    
    for (int i = 1; i <= n; i++) cin >> a[i];
    ST st;
    st.build(1, 1, n);
    while (q--) {
        ll type; cin >> type;
        if (type == 2) {
            ll l, r;
            cin >> l >> r;
            cout << st.query(1, 1, n, l + 1, r) << nl; 
        }
        else {
            ll i, v;
            cin >> i >> v;
            st.upd(1, 1, n, i + 1, v);
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
    solve();
    return 0;
}
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

// int a[N] = {1};//populate it in main function
vector<ll> a(N, 1);

struct ST {
    long long t[4 * N], lazy[4 * N] = {1};
    #define lc (n << 1)//2n
    #define rc ((n << 1) | 1)//2n + 1

    inline void push(int n, int b, int e) {
        if (lazy[n] == 1) return;
        t[n] = (t[n] * lazy[n]) % mod;
        if (b != e) {
        lazy[lc] = (lazy[lc] * lazy[n]) % mod;
        lazy[rc] = (lazy[rc] * lazy[n]) % mod;
        }
        lazy[n] = 1;
    }

    inline long long combine(long long a,long long b) {
        return (a + b) % mod;
    }

    inline void pull(int n) {
        t[n] = (t[lc] + t[rc]) % mod;
    }

    void build(int n, int b, int e) {
        lazy[n] = 1;
        if (b == e) {
            t[n] = (a[b] % mod);
            return;
        }
        int mid = (b + e) >> 1;
        build(lc, b, mid);
        build(rc, mid + 1, e);
        pull(n);
    }

    void upd(int n, int b, int e, int i, int j, long long v) {
        push(n, b, e);
        if (j < b || e < i) return;
        if (i <= b && e <= j) {
            lazy[n] = v; //set lazy
            push(n, b, e);
            return;
        }
        int mid = (b + e) >> 1;
        upd(lc, b, mid, i, j, v);
        upd(rc, mid + 1, e, i, j, v);
        pull(n);
    }

    long long query(int n, int b, int e, int i, int j) {
        push(n, b, e);
        if (i > e || b > j) return 0; //return null
        if (i <= b && e <= j) return t[n];
        int mid = (b + e) >> 1;
        return combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));
    }
};

/*  //example:
    ST st;
    st.build(1, 1, n);
    cout << st.query(1, 1, n, 2, 4) << "\n";
    st.upd(1, 1, n, 2, 4, 2);
    cout << st.query(1, 1, n, 2, 4) << "\n";
*/

void solve(){
    ll n, q;
    cin >> n >> q;

    ST st;
    st.build(1, 1, n);

    while (q--) {
        ll type; cin >> type;
        if (type == 1) {
            ll i, j, v;
            cin >> i >> j >> v;
            st.upd(1, 1, n, i + 1, j , v);
        }
        else {
            ll i, j;
            cin >> i >> j;
            cout << st.query(1, 1, n, i + 1, j) << nl;
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
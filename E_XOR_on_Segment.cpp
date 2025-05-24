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
const int N = 1e3 + 7, B = 20;
const int INF = 1e9 + 10;

struct node {
    int on[B], off[B];
};

int a[N];//populate it in main function

struct ST {
    node t[4 * N];
    int lazy[4 * N];
    #define lc (n << 1)//2n
    #define rc ((n << 1) | 1)//2n + 1

    inline void push(int n, int b, int e) {
        if (lazy[n] == 0) return;

        for (int i = 0; i < B; i++) {
            if ((lazy[n] >> i) & 1) {
                swap(t[n].off[i], t[n].on[i]);
            }
        }

        if (b != e) {
        lazy[lc] = lazy[lc] ^ lazy[n];
        lazy[rc] = lazy[rc] ^ lazy[n];
        }
        lazy[n] = 0;
    }

    inline node combine(node a, node b) {
        node ans;
        for (int i = 0; i < B; i++) {
            ans.on[i] = a.on[i] + b.on[i];
            ans.off[i] = a.off[i] + b.off[i];
        }
        return ans;
    }

    inline void pull(int n) {
        t[n] = combine(t[lc], t[rc]);
    }

    void build(int n, int b, int e) {
        lazy[n] = 0;
        if (b == e) {
            for (int i = 0; i < B; i++) {
                if ((a[b] >> i) & 1) {
                    t[n].on[i] = 1;
                    t[n].off[i] = 0;
                }
                else {
                    t[n].off[i] = 1;
                    t[n].on[i] = 0;
                }
            }
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

    node query(int n, int b, int e, int i, int j) {
        push(n, b, e);
        if (i > e || b > j) {
            node zero;
            memset(zero.on, 0, sizeof zero.on);
            memset(zero.off, 0, sizeof zero.off);
            return zero;
        }
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
    ll n; cin >> n;
    
    for (int i = 1; i <= n; i++) cin >> a[i];
    ST st;
    st.build(1, 1, n);
    ll q;
    cin >> q;

    while (q--) {
        ll type;
        cin >> type;
        if (type == 1) {
            ll i, j;
            cin >> i >> j;
            node ans = st.query(1, 1, n, i, j);
            ll sum = 0;
            for (int i = 0; i < B; i++) {
                sum += 1LL * ans.on[i] * (1LL << i);
            }
            cout << sum << nl;
        }
        else {
            ll i, j, v;
            cin >> i >> j >> v;
            st.upd(1, 1, n, i, j, v);
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
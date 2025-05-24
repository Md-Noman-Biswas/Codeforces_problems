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
const int N = 1e4 + 7;
const int INF = 1e9 + 10;

int a[N];//populate it in main function
struct node {
    ll xor0;
    ll xor1;
};

struct ST {
    node t[4 * N];
    bool lazy[4 * N];
    #define lc (n << 1)//2n
    #define rc ((n << 1) | 1)//2n + 1

    inline void push(int n, int b, int e) {
        if (!lazy[n]) return;
        swap(t[n].xor0, t[n].xor1);
        if (b != e) {
        lazy[lc] = !lazy[lc];
        lazy[rc] = !lazy[rc];
        }
        lazy[n] = false;
    }

    inline node combine(node a, node b) {
        return {a.xor0 ^ b.xor0, a.xor1 ^ b.xor1};
    }

    inline void pull(int n) {
        t[n] = combine(t[lc], t[rc]);
    }

    void build(int n, int b, int e) {
        lazy[n] = false;
        if (b == e) {
            t[n] = {0, a[b]};
            return;
        }
        int mid = (b + e) >> 1;
        build(lc, b, mid);
        build(rc, mid + 1, e);
        pull(n);
    }

    void upd(int n, int b, int e, int i, int j) {
        push(n, b, e);
        if (j < b || e < i) return;
        if (i <= b && e <= j) {
            lazy[n] = !lazy[n]; //set lazy
            push(n, b, e);
            return;
        }
        int mid = (b + e) >> 1;
        upd(lc, b, mid, i, j);
        upd(rc, mid + 1, e, i, j);
        pull(n);
    }

    node query(int n, int b, int e, int i, int j) {
        push(n, b, e);
        if (i > e || b > j) return {0, 0}; //return null
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
    ll n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    string s;
    cin >> s;
    ll q; cin >> q;
    ST st;
    st.build(1, 1, n);
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            st.upd(1, 1, n, i + 1, i + 1);
        }
    }

    while (q--) {
        ll type;
        cin >> type;
        if (type == 1) {
            ll l, r; cin >> l >> r;
            st.upd(1, 1, n, l, r);
        } 
        else {
            ll v;
            cin >> v;
            node ans = st.query(1, 1, n, 1, n);
            if (v) cout << ans.xor1 << " ";
            else cout << ans.xor0 << " ";
        }
    }
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
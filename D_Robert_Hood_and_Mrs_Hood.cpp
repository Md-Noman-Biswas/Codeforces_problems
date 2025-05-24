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

void solve() {
    ll n, d, k;
    cin >> n >> d >> k;
    vector<pair<ll, ll>> pr;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll diff = k;
    while (diff--) {
        ll l, r;
        cin >> l >> r;
        pr.push_back({l, r});
    }
    sort(pr.begin(), pr.end());

    
    ll last = 0;
    ll day = 1;
    ll b = llmn, m = llmx;
    ll b_ind = -1, m_ind = -1;

    for (int i = 1; i <= n - d + 1; i++) {
        while (last < k && pr[last].first <= i + d - 1) {
            pq.push(pr[last].second);
            last++;
        }

        while (!pq.empty() && pq.top() < i) {
            pq.pop();
        }


        ll sz = pq.size();
        // cout << sz << nl;

        if (b < sz) {
            b_ind = i;
            b = sz;
        }
        if (m > sz) {
            m_ind = i;
            m = sz;
        }
    }
    cout << b_ind << " " << m_ind << nl;
}

signed main() {
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

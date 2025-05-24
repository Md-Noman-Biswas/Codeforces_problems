#include <bits/stdc++.h>
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

struct Rank{
    int r[5];
};

bool operator < (Rank A, Rank B) {
    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        if (A.r[i] < B.r[i]) cnt++;
    }
    return cnt >= 3;
}

void solve() {
    ll n;
    cin >> n;
    vector<Rank> arr(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i].r[j];
        }
    }

    ll w = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[w]) w = i;
    }

    for (int i = 0; i < n; i++) {
        if (i == w) continue;
        if (arr[i] < arr[w]) {
            cout << -1 << nl;
            return;
        }
    }
    cout << ++w << nl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

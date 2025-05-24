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

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<ll, int> prefixModMap; // Map to store (prefix sum % k, index)
    ll currentPrefixSum = 0;
    int maxLength = 0;

    prefixModMap[0] = -1; // Handle the case when the subarray starts from the beginning

    for (int i = 0; i < n; i++) {
        currentPrefixSum += arr[i];
        ll mod = currentPrefixSum % k;

        // Adjust the mod to always be positive
        if (mod < 0) {
            mod += k;
        }

        // If the mod is already in the map, update maxLength
        if (prefixModMap.find(mod) != prefixModMap.end()) {
            maxLength = max(maxLength, i - prefixModMap[mod]);
        } else {
            // Store the first occurrence of this mod
            prefixModMap[mod] = i;
        }
    }

    cout << maxLength << nl;
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

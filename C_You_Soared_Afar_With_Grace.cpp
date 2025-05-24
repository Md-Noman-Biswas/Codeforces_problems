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
    vector<ll> arr(n + 1), brr(n + 1);
    ll xd = 0;
    map<ll, ll> index1, index2, mp1, mp2;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        index1[arr[i]] = i;
    }
    for (int i = 1; i <= n; i++) {
        cin >> brr[i];
        index2[brr[i]] = i;
    }

    ll pivot = -1;
    for (int i = 1; i <= n; i++) {
        if (arr[i] == brr[i]) {
            pivot = arr[i];
            xd++;
        }
        mp1[arr[i]] = brr[i];
        mp2[brr[i]] = arr[i];
    }
    if (xd > 1) {
        cout << -1 << nl;
        return;
    }
    for (int i = 1; i <= n; i++) {
        ll temp = mp1[arr[i]];
        if (arr[i] != mp1[temp]) {
            cout << -1 << nl;
            return;
        }
    }


    vector<pair<ll, ll>> ope;

    if (n % 2 != 0) {
        if (index1[pivot] != n / 2 + 1) ope.push_back({index1[pivot], n / 2 + 1});
        index1[arr[n / 2 + 1]] = index1[pivot];
        index1[pivot] = n / 2 + 1;
        ll temp1= index1[arr[n / 2 + 1]], temp2 = n / 2 + 1;
        // cout << temp1 << ' ' << temp2 << nl;
        swap(arr[temp1], arr[temp2]);
        swap(brr[temp1], brr[temp2]);
        // for (auto it: arr) cout << it << " ";
        // return;

        ll cnt = 1;
        for (int i = n; i > n / 2; i--) {
            if (arr[i] == pivot) continue;
            ll target = index1[brr[i]];
            // cout << brr[i] << " " << target << nl;
            if (target != cnt) ope.push_back({target, cnt});
            ll temp1 = target, temp2 = cnt;
            index1[arr[cnt]] = target;
            index1[brr[i]] = cnt;
            cnt++;
            // cout << "ind" << " " << arr[temp1] << " " << arr[temp2] << nl;
            swap(arr[temp1], arr[temp2]);
            swap(brr[temp1], brr[temp2]);
            // cout << index1[i] << nl;
            //     for (auto it: index1) cout << it.first << " " << it.second << nl;
            //     cout << nl;
        }
    }
    else {
        ll cnt = 1;
        for (int i = n; i >= n / 2; i--) {
            // if (arr[i] == pivot) continue;
            ll target = index1[brr[i]];
            // cout << brr[i] << " " << target << nl;
            if (target != cnt) ope.push_back({target, cnt});
            ll temp1 = target, temp2 = cnt;
            index1[arr[cnt]] = target;
            index1[brr[i]] = cnt;
            cnt++;
            // cout << "ind" << " " << arr[temp1] << " " << arr[temp2] << nl;
            swap(arr[temp1], arr[temp2]);
            swap(brr[temp1], brr[temp2]);
            // cout << index1[i] << nl;
            //     for (auto it: index1) cout << it.first << " " << it.second << nl;
            //     cout << nl;
        }
    }

    // for (auto it: index1) cout << it.first << " " << it.second << nl;
    // return;
    cout << ope.size() << nl;
    for (auto it: ope) cout << it.first << " " << it.second << nl;

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
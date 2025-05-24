#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "Yes\n"
#define NO cout << "No\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

bool cmp(pair<ll, ll> p1, pair<ll, ll> p2) {
    if (p1.first == p2.first) return p1.second < p2.second;
    return p1.first < p2.first;
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    vector<ll> type(n);
    vector<pair<ll, ll>> index;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        index.push_back({arr[i], i});
    }
    sort(index.begin(), index.end(), cmp);

    for (auto it: index) {
        cout << it.first << " " << it.second << nl;
    }
    cout << nl;

    for (int i = 0; i < n; i++) cin >> type[i];

    vector<pair<ll, ll>> pr;
    for (int i = 0; i < n; i++) {
        pr.push_back({arr[i], type[i]});
    }

    for (int i = 0; i < n ; i++) {
        ll pivot = index[i].second;
        //cout << pivot << nl;
        for (int j = pivot - 1; j >= 0; j--) {
            if (pr[pivot].first < pr[j].first && pr[pivot].second != pr[j].second) {
                swap(pr[pivot], pr[j]);
                pivot = j;
            }
        }
    }

    for (auto it: pr){
        cout << it.first << " " << it.second << nl;
    }
    cout << nl;

    bool flag = true;
    for (int i = 0; i < n - 1; i++) {
        if (pr[i].first > pr[i + 1].first) {
            flag = false;
            break;
        }
    }

    if (flag) YES;
    else NO;

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
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

bool cmp(pair<ll, ll> p1, pair<ll, ll> p2) {
    if (p1.first == p2.first) return p1.second < p2.second;
    return p1.first < p2.first;
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n + 1);
    vector<pair<ll, ll>> pr(n + 1);
    ll sum = 0;
    pr[0].first = 0;
    pr[0].second = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        pr[i].first = arr[i];
        pr[i].second = i;
        sum += arr[i];
    }   
    sort(pr.begin(), pr.end(), cmp);


    vector<ll> pref(n + 1);
    pref[1] = pr[1].first;
    for (int i = 2; i <= n; i++) {
        pref[i] = pref[i - 1] + pr[i].first;
    }

    vector<ll> suff(n + 1);
    suff[n] = pr[n].first;
    for (int i = n - 1; i > 0; i--) {
        suff[i] = suff[i + 1] + pr[i].first;
    }

    //cout << sum << nl << nl;
    ll current_total;
    vector<ll> nice;
    ll cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            current_total = suff[i + 1];
            if (current_total % 2 == 1) continue;
            ll temp = ceil(current_total / (2 * 1.0));
            //cout << current_total << " " << temp << " " << pr[n].first << nl;
            if (pr[n].first == temp){
                nice.push_back(pr[i].second);
            }
        }
        else if (i == n) {
            current_total = pref[i - 1];
            if (current_total % 2 == 1) continue;
            ll temp = ceil(current_total / (2 * 1.0));
            //cout << current_total << " " << temp << " " << pr[n - 1].first << nl;
            if (pr[n - 1].first == temp) {
                nice.push_back(pr[i].second);
            }
        }
        else {
            ll current_total = pref[i - 1] + suff[i + 1];
            if (current_total % 2 == 1) continue;
            ll temp = ceil(current_total / (2 * 1.0));
            //cout << current_total << " " << temp << nl;
            if (pr[n].first == temp) {
                //cout << current_total << " " << temp << nl;
                nice.push_back(pr[i].second);
            }
        }
        //cout << nl;
    }
    cout << nice.size() << nl;
    for (auto it: nice) {
        cout << it << " ";
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
    solve();
    return 0;
}
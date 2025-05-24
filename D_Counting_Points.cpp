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

bool cmp(pair<ll, ll> p1, pair<ll, ll> p2) {
    if (p1.first == p2.first) return p1.second > p2.second;
    return p1.first < p2.first;
}

void solve(){
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> pr;
    vector<ll> points(n), radius(n);
    for (int i = 0; i < n; i++) cin >> points[i];
    for (int i = 0; i < n; i++) cin >> radius[i];
    
    for (int i = 0; i < n; i++) {
        pr.push_back({points[i], radius[i]});
    }

    sort(pr.begin(), pr.end(), cmp);
    ll total_points = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            ll center_point;
            for (int j = pr[i].first; j <= pr[i].first + pr[i].second; j++) {
                ll number_of_points = sqrt(pr[i].second * pr[i].second - (j - pr[i].first) * (j - pr[i].first));
                if (j == pr[i].first) center_point = number_of_points * 2 + 1;
                // cout << " " << j << " " << number_of_points << nl;
                total_points += (number_of_points * 2 + 1) * 2;
            }
            total_points -= center_point;
            // cout << total_points << nl;
        }
        else {
            if (pr[i].first == pr[i - 1].first) continue;
            ll center_point;
            for (int j = pr[i].first; j <= pr[i].first + pr[i].second; j++) {
                ll number_of_points = sqrt(pr[i].second * pr[i].second - (j - pr[i].first) * (j - pr[i].first));
                if (j == pr[i].first) center_point = number_of_points * 2 + 1;
                // cout << " " << j << " " << number_of_points << nl;
                total_points += (number_of_points * 2 + 1) * 2;
            }
            total_points -= center_point;
            // cout << total_points << nl;
            ll radius_right = pr[i - 1].first + pr[i - 1].second;
            ll radius_left = pr[i].first - pr[i].second;
            ll duplicate = 0;
            if (radius_left == radius_right) {
                duplicate++;
            }
            else if (radius_right > radius_left) {
                // cout << i << " -> " << radius_left << " " << radius_right << nl;
                duplicate += 2;
                ll diff = radius_right - radius_left;
                for (int j = radius_left + 1; j < radius_right; j++) {
                    ll number_of_points = sqrt(pr[i - 1].second * pr[i - 1].second - ((j - pr[i - 1].first) * (j - pr[i - 1].first)));
        
                    if (j != pr[i].first) number_of_points--;
                    duplicate += (number_of_points * 2 + 1);
                    cout << j << " " << duplicate<< nl;
                }
                // ll diff_sq = pr[i - 1].second * pr[i - 1].second - ((radius_left + 1 - pr[i - 1].first) * (radius_left + 1 - pr[i - 1].first));
                // ll number_of_points = (diff_sq >= 0) ? sqrt(diff_sq) : 0;
            }
            total_points -= duplicate;

            // cout << total_points << nl;
        }
    }
    cout << total_points << nl;
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
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

double distance(ll a1, ll b1, ll a2, ll b2){
    double temp1 = abs(a1 - a2);
    temp1 *= temp1;
    double temp2 = abs(b1 - b2);
    temp2 *= temp2;
    return sqrt(temp1 + temp2); 
}

void solve(){
    ll w, h;
    cin >> w >> h;
    vector<pair<ll, ll>> down;
    ll n;
    cin >> n;
    for(int i = 0; i < n; i++){
        ll temp;
        cin >> temp;
        down.push_back({temp, 0});
    }
    cin >> n;
    vector<pair<ll, ll>> up;
    for(int i = 0; i < n; i++){
        ll temp;
        cin >> temp;
        up.push_back({temp, h});
    }

    cin >> n;
    vector<pair<ll, ll>> left;
    for(int i = 0; i < n; i++){
        ll temp;
        cin >> temp;
        left.push_back({0, temp});
    }

    cin >> n;
    vector<pair<ll, ll>> right;
    for(int i = 0; i < n; i++){
        ll temp;
        cin >> temp;
        right.push_back({w, temp});
    }

    // for(auto it: right){
    //     cout << it.first << " " << it.second << nl;
    // }

    //taking down as ground
    ll area1 = 0;
    double ground_down = distance(down.front().first, down.front().second, down.back().first, down.back().second);
    //cout << ground_down << nl;
    area1 = ground_down * h;

    //taking up as ground
    ll area2 = 0;
    double up_ground = distance(up.front().first, up.front().second, up.back().first, up.back().second);
    //cout << up_ground << nl;
    area2 = up_ground * h;

    //taking left as ground
    ll area3 = 0;
    double ground_left = distance(left.front().first, left.front().second, left.back().first, left.back().second);
    //cout << ground_left << nl;
    area3 = ground_left * w;

    //taking right as ground
    ll area4 = 0;
    double ground_right = distance(right.front().first, right.front().second, right.back().first, right.back().second);
    //cout << ground_right << nl;
    area4 = ground_right * w;

    ll ans1 = max(area1, area2);
    ll ans2 = max(area3, area4);

    ll ultimate_ans = max(ans1, ans2);
    cout << ultimate_ans << nl;
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
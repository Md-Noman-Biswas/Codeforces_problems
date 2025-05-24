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

bool cmp(pair<ll, vector<ll>> p1, pair<ll, vector<ll>> p2){
    if(p1.first == p2.first){
        return p1.second.size() > p2.second.size();
    }
    return p1.first < p2.first;
}

bool predicate(ll mid, vector<pair<ll, vector<ll>>>& weird){
    ll diff = mid;
    for(auto it: weird){
        vector<ll> temp = it.second;
        for(int i = 0; i < temp.size(); i++){
            if(temp[i] < diff){
                diff++;
            }else{
                return false;
            }
        }
    }
    return true;
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> v[n];
    ll mx = 0;
    vector<pair<ll, vector<ll>>> weird;
    for(int i = 0; i < n; i++){
        ll temp;
        cin >> temp;
        mx += temp;
        ll mxx = llmn;
        for(int j = 0; j < temp; j++){
            ll xd;
            cin >> xd;
            v[i].push_back(xd);
            mxx = max(mxx, xd - j);
        }
        weird.push_back({mxx, v[i]});
    }   

    sort(weird.begin(), weird.end(), cmp);

    // for(auto it: weird){
    //     for(auto it2: it.second){
    //         cout << it2 << " ";
    //     }
    //     cout << nl;
    // }

    ll l = 0;
    ll r = 1e10;
    ll ans = 0;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(predicate(mid, weird)){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    cout << ans << nl;
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
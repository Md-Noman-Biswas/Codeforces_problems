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

void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char, ll> mp;
    map<ll, ll> backward_distinct_so_far;
    map<ll, ll> forward_distinct_so_far;

    backward_distinct_so_far[s.size() - 1]++;
    mp[s[s.size() - 1]]++;
    for(int i = s.size() - 2; i >= 0; i--){
        if(mp.find(s[i]) == mp.end()){
            backward_distinct_so_far[i] = backward_distinct_so_far[i + 1] + 1;
            mp[s[i]]++;
        }else{
            backward_distinct_so_far[i] = backward_distinct_so_far[i + 1];
        }
    }

    mp.clear();

    forward_distinct_so_far[0]++;
    mp[s[0]]++;
    for(int i = 1; i < s.size(); i++){
        if(mp.find(s[i]) == mp.end()){
            forward_distinct_so_far[i] += forward_distinct_so_far[i - 1] + 1;
            mp[s[i]]++;
        }else{
            forward_distinct_so_far[i] = forward_distinct_so_far[i - 1];
        }
    }

    // for(auto it: backward_distinct_so_far){
    //     cout << it.first << " " << it.second << nl;
    // }

    // cout << nl;

    // for(auto it: forward_distinct_so_far){
    //     cout << it.first << " " << it.second << nl;
    // }

    ll ans = llmn;


    for(int i = 0; i < s.size() - 1; i++){
        ll cnt = forward_distinct_so_far[i] + backward_distinct_so_far[i + 1];
        ans = max(ans, cnt);
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
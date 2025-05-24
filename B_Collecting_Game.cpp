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

void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i].first;
        arr[i].second = i;
    }
    sort(arr.begin(), arr.end());
    vector<ll> pref(n);
    pref[0] = arr[0].first;
    for(int i = 1; i < n; i++){
        pref[i] = arr[i].first + pref[i - 1];
    }

    vector<ll> ans(n);
    stack<ll> st;
    for(int i = 0; i < n; i++){
        st.push(arr[i].second);
        if(arr[i + 1].first > pref[i] || i == n - 1){
            while(!st.empty()){
                ll temp = st.top();
                st.pop();
                ans[temp] = i;
            }
        }
    }

    for(auto it: ans){
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
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
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
deque<pair<ll, ll>> dq;

auto findd(ll x){
    for(auto it = dq.begin(); it != dq.end(); ++it){
        if((*it).first == x){
            return it;
        }
    }
    return dq.end();
}


void solve(){
    ll n, k;
    cin >> n >> k;
    vector<int> arr(n + 1);
    vector<int> hsh(51);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(hsh[arr[i]] == 0){
            dq.push_back({arr[i], i});
            hsh[arr[i]] = 1;
        }
    }   

    while(k--){
        ll x;
        cin >> x;
        auto it = findd(x);
        int temp = (*it).first;
        int index = it - dq.begin();
        if(it != dq.end()) {
            cout << (*it).second << " ";
            dq.erase(it); 
        }
        dq.push_front({temp, 1});
        for(int i = 1; i <= index; i++){
            dq[i].second++;
        }

        
    }
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

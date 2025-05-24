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

ll need_to_add(ll n, ll k){
    ll cnt = 0;
    ll temp = n;
    while(k >= temp){
        temp += n;
        cnt++;
    }
    //cout << temp << nl;
    return cnt;
}

void solve(){
    ll n, k;
    cin >> n >> k;
    deque<ll> dq;

    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        dq.push_back(x);
    }   

    sort(dq.begin(), dq.end());
    ll team = 0;

    while(!dq.empty()){
        ll temp = dq.back();
        dq.pop_back();
        ll add = need_to_add(temp, k);
        //cout << add << nl;
        if(add > dq.size()) break;
        while(add--){
            dq.pop_front();
        }
        team++;
    }
    cout << team << nl;
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
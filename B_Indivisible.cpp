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
    ll sum = n * (n + 1) / 2;
    if(n == 1){
        cout << 1 << nl;
        return;
    } 
    if(sum % n == 0){
        cout << -1 << nl;
        return;
    }  
    deque<ll> even;
    deque<ll> odd;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0) even.push_back(i);
        else odd.push_back(i);
    }
    vector<ll> ans;
    bool flag_even = true;
    for(int i = 0; i < n; i++){
        if(flag_even){
            ans.push_back(even.front());
            even.pop_front();
            flag_even = false;
        }else{
            ans.push_back(odd.front());
            odd.pop_front();
            flag_even = true;
        }
    }

    for(auto it: ans){
        cout << it << " ";
    }
    cout << nl;
}

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
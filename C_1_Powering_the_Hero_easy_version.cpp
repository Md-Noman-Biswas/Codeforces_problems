#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    multiset<ll> bonus;
    int i = 0;
    int x = 0;
    while(i < n && arr[i] == 0){
        x++;
        i++;
    }
    ll ans = 0;
    for(int i = x; i < n; i++){
        if(arr[i] != 0){
            bonus.insert(arr[i]);
        } else {
            if (!bonus.empty()) {
                auto it = bonus.end();
                --it; // Decrement the iterator before erasing
                ans += *it;
                bonus.erase(it);
            }
        }
    }

    cout << ans << nl;
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
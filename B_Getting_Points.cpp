#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

ll n, p, l, t;
ll task;

bool pre(ll mid){
    ll points = (mid*l + min(task, mid*2)*t);    
    return points >= p;
}

void solve(){
    cin >> n >> p >> l >> t;
    ll l = 1;
    ll r = n;
    ll ans = 0;
    task = n/7;
    if(n % 7 != 0) task++;
    while(l <= r){
        ll mid = l + (r - l)/2;
        if(pre(mid)){
            r = mid - 1;
            ans = mid;
        }else{
            l = mid + 1;
        }
    }
    cout << n - ans << nl;
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
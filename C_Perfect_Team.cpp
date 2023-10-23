#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
ll c, m, x;

ll isValid(){
    ll team = 0;
    while(m != 0 && c != 0){
        m--;
        c--;
        if(x == 0){
            if(m > c) m--;
            else c--;
        }else{
            x--;
        }
        team++;
        if(m == 1 && c == 1 && x == 0) break;
    }
    return team;
}

void solve(){
    cin >> c >> m >> x;
    cout << isValid() << nl;
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
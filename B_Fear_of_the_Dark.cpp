#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"


double distance(double x1, double x2, double y1, double y2){
    return sqrt((x1-y1)*(x1-y1) + (x2-y2)*(x2-y2));
}


void solve(){
    double p1, p2;
    double a1, a2;
    double b1, b2;
    cin >> p1 >> p2;
    cin >> a1 >> a2;
    cin >> b1 >> b2;

    double d3 = distance(0, 0, a1, a2);
    double d4 = distance(0, 0, b1, b2);
    double d1 = distance(p1, p2, a1, a2);
    double d2 = distance(p1, p2, b1, b2);
    double so_far_away = distance(a1, a2, b1, b2);

    double r1 = min(d1, d2);
    double r2 = min(d3, d4);
    double ans = max(r1, r2);

    if((min(d1, d2) == d1 && min(d3, d4) == d3) || (min(d1, d2) == d2 && min(d3,d4) == d4)){

    }else{
        if(2*ans < so_far_away){
        ans = so_far_away/2;
        }
    }
    cout << fixed << setprecision(10) << ans << nl;


    // if(2*ans < so_far_away){
    //     ans = so_far_away/2;
    //     cout << setprecision(11) << ans << nl;
    // }else{
    //     cout << setprecision(11) << ans << nl;
    // }
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
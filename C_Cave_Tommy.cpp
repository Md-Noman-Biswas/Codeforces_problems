#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, l, r;
    cin >> n >> l >> r;

    int a, b, c;
    if(l == 1)l++;
    for(a = l; a*a*a<=r; a++){
        if(n%a == 0){
            break;
        }
    }
    
    int rem = n/a;
    for(b=a+1; b*b <= r; b++){
        if(rem % b == 0){
            c = rem/b;
            if(b >= c){
                c = 0;
            }
            break;
        }
    }
    if ((a >= l && a <= r) && (b >= l && b <= r) && ((c == 0 && b * c == n) || (c > 0 && c >= l && c <= r && a * b * c == n))) {
        cout << a << " " << b << " " << c << "\n";
    } else {
        cout << -1 << "\n";
    }

}

int main(){
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

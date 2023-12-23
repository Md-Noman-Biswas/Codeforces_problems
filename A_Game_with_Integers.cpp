#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve() {
    int n;
    cin >> n;
    if (n % 3) {
        cout << "First\n";
    } else {
        cout << "Second\n";
    }
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
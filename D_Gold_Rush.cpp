#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin >> n >> m;
    while(n%2 == 0#include <iostream>
using namespace std;

bool can_split_into_pile_of_size_n(int n, int x) {
    while (n % 2 == 0) {
        n /= 2;
    }
    while (x % 2 == 0) {
        x /= 2;
    }
    return x % n == 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (can_split_into_pile_of_size_n(n, m)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

        n/=2;
    }
    while(m%2 == 0){
        m/=2;
    }
    if(n%m == 0 ){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
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
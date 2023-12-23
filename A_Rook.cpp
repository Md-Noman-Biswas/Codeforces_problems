#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

void solve(){
    string s;
    cin >> s;
    int num = (int)s[1] - '0';
    for(int i=1; i<=8; i++){
        if(i != num){
            cout << s[0] << i << nl;
        }
    }
    for(int i=97; i<=104; i++){
        if(int(s[0]) != i){
            cout << char(i) << s[1] << nl;
        }
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
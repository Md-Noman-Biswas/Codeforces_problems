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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int one = 0;
    int zero = 0;
    int cnt= 0;

    bool flag = false;
    for(int i=0; i<n; i++){
        if(s[i] == '0'){
            flag = true;
        }
    }
    if(flag) YES;
    else NO;
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
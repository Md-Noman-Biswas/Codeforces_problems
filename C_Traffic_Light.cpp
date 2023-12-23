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
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    string ss = s + s;
    int ans = 0;
    int cnt;
    for(int i=0; i<n; i++){
        if(ss[i] == c){
            cnt = 0;
            while(ss[i] != 'g' && i < 2*n){
                cnt++;
                i++;
            }
        }
        ans = max(cnt, ans);
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
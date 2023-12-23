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
    ll n;
    cin >> n;
    ll range = n;
    int cnt = 0;
    vector<int> ans;
    for(int i=2; i*i <= range; i++){
        if(n % i == 0){
            n /= i;
            cnt++;
            ans.push_back(i);
        }
        if(cnt == 2){
            ans.push_back(n);
            break;
        }
    }
    if((cnt < 2) || (ans[0] == ans[1] || ans[1] == ans[2] || ans[0] == ans[2])){
        cout << "NO" << nl;
        return;
    }else{
        YES;
        cout << ans[0] << " " << ans[1] << " " << ans[2] << nl; 
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
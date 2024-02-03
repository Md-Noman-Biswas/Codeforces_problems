#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;

void solve(){
    string s;
    cin >> s;
    ll consec = llmn;
    ll cnt = 0;
    ll zero = 0;
    ll n = s.size();
    ll v = n;
    s += s;
    n = s.size();
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            cnt++;
        }else{
            cnt = 0;
            zero++;
        }
        consec = max(consec, cnt);
    }   

    if(zero == 0){
        cout << v * v << nl;
        return;
    }

    ll ans = llmn;
    for(int i = 0; i <= consec; i++){
        ans = max(ans, (consec - i) * (i + 1));
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
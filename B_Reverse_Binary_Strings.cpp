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
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll consec_one = 0;
    ll consec_zero = 0;

    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == '1' && s[i + 1] == '1'){
            consec_one++;
        }
        if(s[i] == '0' && s[i + 1] == '0'){
            consec_zero++;
        }
    }
    cout << max(consec_one, consec_zero) << nl;   
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
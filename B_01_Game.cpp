#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "DA\n"
#define NO cout << "NET\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;

void solve(){
    string s;
    cin >> s;
    ll zero = 0;
    ll one = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0') zero++;
        else one++;
    }   
    ll xd = min(zero, one);
    if(xd % 2 != 0) YES;
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
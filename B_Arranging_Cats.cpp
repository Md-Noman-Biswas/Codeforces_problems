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
    string s1, s2;
    cin >> s1 >> s2;
    ll one_s1 = 0;
    ll one_s2 = 0;
    ll miss = 0;
    
    for(int i=0; i<n; i++){
        if(s1[i] == s2[i]){
            continue;
        }else{
            if(s1[i] == '1') one_s1++;
            if(s2[i] == '1') one_s2++;
        }
    }
    ll diff = min(one_s1, one_s2);
    cout << diff + abs(one_s1 - one_s2) << nl;
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
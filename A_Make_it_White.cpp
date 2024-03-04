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
    ll first = -1;
    ll last = -1;
    bool flag = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'B'){
            if(!flag){
                first = i;
                flag = true;;
            }
            last = i;
        }
    }   
    cout << last - first + 1 << nl;
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
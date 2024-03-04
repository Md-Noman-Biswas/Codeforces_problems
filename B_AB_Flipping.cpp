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
    ll right = -1;
    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] == 'B'){
            right = i;
            break;
        }
    }   
    ll left = -1;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A'){
            left = i;
            break;
        }
    }   
    
    //cout << right << " " << left << nl;
    if(left > right || (left == -1 || right == -1)){
        cout << 0 << nl;
        return;
    }
    cout << right - left << nl;
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
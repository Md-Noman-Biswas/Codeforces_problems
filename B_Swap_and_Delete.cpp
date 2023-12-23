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
    int one = 0;
    int zero = 0;
    int cost = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '1') one++;
        if(s[i] == '0') zero++;
    }
    for(int i=0; i<s.size(); i++){
        if(s[i] == '0'){
            if(one > 0){
                one--;
            }else{
                break;
            }
        }
        if(s[i] == '1'){
            if(zero > 0){
                zero--;
            }else{
                break;
            }
        }
    }
    cout << one + zero << nl;
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
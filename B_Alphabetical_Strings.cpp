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
    ll ind = -1;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a'){
            ind = i;
            break;
        }
    }   
    if(ind == -1){
        NO;
        return;
    }
    
    ll l = ind;
    ll r = ind;
    char ch = 'b';
    bool flag = true;

    while(l > 0 || r < s.size() - 1){
        if(s[l - 1] == ch){
            l--;
            ch++;
        }
        else if(s[r + 1] == ch){
            r++;
            ch++;
        }
        else{
            flag = false;
            break;
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
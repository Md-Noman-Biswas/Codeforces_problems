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
    map<char, ll> mp;

    string rev;
    for(int i = n - 1; i >= 0; i--){
        mp[s[i]]++;
        rev.push_back(s[i]);
    }
    if(rev == s){
        if(s.size() % 2 != 0){
            for(int i = 0; i <= n; i++){
                cout << 1;
            }
            cout << nl;
        }else{
            for(int i = 0; i <= n; i++){
                if(i % 2 != 0){
                    cout << 0;
                }else{
                    cout << 1;
                }
            }
            cout << nl;
        }
    }
    else if(s.size() % 2 == 0){
        //only number of 0 and 1 is the answer
        for(int i = 0; i <= n; i++){
            if(i == mp['1'] || i == mp['0']){
                cout << 1;
            }else{
                cout << 0;
            }
        }
        cout << nl;
    }else{
        ll match = 0;
        ll mismatch = 0;
        ll i = 0, j = n - 1;
        string ans;
        while(i < j){
            if(s[i] == s[j]) match++;
            else mismatch++;
            i++;
            j--;
        }
        // cout << match << nl;
        // cout << mismatch << nl;

        for(int i = 0; i <= n; i++){
            char temp = '0';
            if(i >= mismatch && i <= (mismatch + (match * 2) + 1)){
                temp = '1';
            }
            if(i == n / 2){
                temp = '1';
            }
            ans.push_back(temp);
        }
        cout << ans << nl;
    }
}

/* Hey you should check this out
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * do something instead of nothing and stay organized
    * bruteforce to find pattern
    * DON'T GET STUCK ON ONE APPROACH
    * Think the problem backwards
    * In practice time don't see failing test case
*/

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
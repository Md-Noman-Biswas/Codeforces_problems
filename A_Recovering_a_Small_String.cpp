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
    string ans;
    map<ll, char> mp;
    char ch = 'a';
    for(int i = 1; i <= 26; i++){
        mp[i] = ch;
        ch++;
    }
    if(n <= 28){
        ans.pb('a');
        ans.pb('a');
        ans.pb(mp[n - 2]);
    }else{
        if(n % 26 == 0){
            if(n == 52){
                ans.pb('a');
                ans.pb(mp[26 - 1]);
                ans.pb('z');
            }
            else if(n == 78){
                ans.push_back('z');
                ans.push_back('z');
                ans.push_back('z');
            }
        }else{
            ll temp = n / 26;
            ll xd = n % 26;
            if(temp == 1){
                ans.push_back('z');
                ans.push_back(mp[xd - 1]);
                ans.push_back('a');
            }
            if(temp == 2){
                ans.push_back('z');
                ans.push_back('z');
                ans.push_back(mp[xd]);
            }
        }
    }   
    sort(ans.begin(), ans.end());
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
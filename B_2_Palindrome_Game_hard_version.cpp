#include <bits/stdc++.h>
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

vector<char> s1, s2, s3;
string ans;

bool isPalindrome(string s) {
    string ss = s;
    reverse(ss.begin(), ss.end());
    return s == ss;
}

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    map<char, ll> mp;
    for(auto it: s){
        mp[it]++;
    }

    if(isPalindrome(s)){
        if(mp['0'] == 1){
            cout << "BOB" << nl;
            return;
        }
        if(mp['0'] % 2 == 0){
            cout << "BOB" << nl;
        }else{
            cout << "ALICE" << nl;
        }
    }
    else{
        if(n % 2 != 0 && mp['0'] == 2 && (s[n/2] == '0')){
            cout << "DRAW" << nl;
        }else{
            cout << "ALICE" << nl;
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

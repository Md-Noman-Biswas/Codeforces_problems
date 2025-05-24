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
const int INF = 1e9 + 10;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flag = false;
    ll digit = llmx;
    char ch1, ch2;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            if(s.size() - 1 - i > 1){
                flag = true;
                break;
            }
            if(i - 1 > 0){
                flag = true;
                break;
            }
        }
    }   
    if(flag){
        cout << 0 << nl;
        return;
    }
    vector<ll> pref(n, 0);
    vector<ll> suff(n, 0);
    pref[0] = int(s[0]) - '0';
    suff[n - 1] = int(s[n - 1]) - '0';
    for(int i = 1; i < s.size(); i++){
        ll temp = int(s[i]) - '0';
        //cout << temp << nl;
        if(temp == 1 || pref[i - 1] == 1) pref[i] = pref[i - 1] * temp;
        else pref[i] = pref[i - 1] + temp; 
    }
    for(int i = n - 2; i >= 0; i--){
        ll temp = int(s[i]) - '0';
        if(temp == 1 || suff[i + 1] == 1) suff[i] = suff[i + 1] * temp;
        else suff[i] = suff[i + 1] + temp; 
    }
    // for(auto it: pref){
    //     cout << it << " ";
    // }
    // cout << nl;
    // for(auto it: suff){
    //     cout << it << " ";
    // }
    // cout << nl;


    ll ans = llmx;
    for(int i = 0; i < n - 1; i++){
        string xd;
        xd.push_back(s[i]), xd.push_back(s[i + 1]);
        ll sum = stoi(xd);
        //cout << sum << nl;
        if(i != 0){
            if(pref[i - 1] != 1 && sum != 1) sum += pref[i - 1];
            else if(sum == 1) sum = pref[i - 1] * 1;
        }
        if(i != n - 2){
            if(suff[i + 2] != 1 && sum != 1) sum += suff[i + 2];
            else if(sum == 1) sum = suff[i + 2] * 1;=
        }
        ans = min(ans, sum);
    }
    cout << ans << nl;
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
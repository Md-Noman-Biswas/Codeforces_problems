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

int check(ll n, ll car){
    ll ans = -1;
    bool carry = 0;
    for(int i = 5; i < 10; i++){
        ll temp = n;
        carry = false;
        temp -= (i + car);
        if(temp < 0){
            temp += 10;
            carry = true;
        }
        if(temp >= 5){
            ans = temp;
            break;
        }
    }
    if(carry && (ans != -1)) return 1;
    else if(ans != -1) return 0;
    else return ans;
}

void solve(){
    ll n;
    cin >> n;
    ll temp = n;
    vector<ll> digits;
    while(temp){
        digits.push_back(temp % 10);
        temp /= 10;
    }  
    reverse(digits.begin(), digits.end());
    bool flag = true;
    ll carry = 0;
    for(int i = digits.size() - 1; i >= 1; i--){
        int xd = check(digits[i], carry);
        if(xd == 1) carry = 1;
        else carry = 0;
        if(xd == -1){
            flag = false;
            break;
        }
    }
    if(digits[0] - carry == 0) YES;
    else NO;
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
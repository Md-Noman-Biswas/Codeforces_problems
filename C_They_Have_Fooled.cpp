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

void printBinary(int num){
    for(int i=10; i>=0; i--){
        cout << ((num >> i) & 1); //it takes ith bit to 0th position
        //we can count bit in this way too using ct += (num>>i)&1
    }
    cout << "\n";
}

void solve(){
    ll a;
    cin >> a;
    if(a == 0 || a == 1 || a == 3 || a == 7){
        cout << 10 << nl;
        return;
    }
    ll last_set_bit = 0;
    for(int i = 0; i < 5; i++){
        if((a & (1<<i)) != 0){//1000
            last_set_bit = i;
        }
    }

    for(int i = 0; i <= last_set_bit; i++){
        //to set bit the 1th index
            a |= (1<<i);
    }
    if(a <= 12){
        cout << a << nl;
    }else{
        cout << 0 << nl;
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
    solve();
    return 0;
}
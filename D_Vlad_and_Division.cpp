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

void printBinary(int num){
    for(int i=30; i>=0; i--){
        cout << ((num >> i) & 1); //it takes ith bit to 0th position
        //we can count bit in this way too using ct += (num>>i)&1
    }
    cout << "\n";
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    multiset<ll> st;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll xd = (1 << 31) - 1;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ll temp = arr[i] ^ xd;
        if(st.find(temp) != st.end()){
            ans++;
            st.erase(st.find(temp));
        }else{
            st.insert(arr[i]);
        }
    }

    cout << ans + st.size() << nl;
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
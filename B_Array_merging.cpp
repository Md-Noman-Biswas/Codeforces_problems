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
    vector<ll> arr(n);
    vector<ll> brr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++) cin >> brr[i];

    ll cons = 0;
    map<ll, ll> consA, consB;
    for(int i=0; i<n; i++){
        cons++;
        if(i == n-1 || arr[i+1] != arr[i]){
            if(consA.find(arr[i]) == consA.end()){
                consA[arr[i]] = cons;
            }else{
                consA[arr[i]] = max(consA[arr[i]], cons);
            }
            cons = 0;
        }
    }   

    cons = 0;
    for(int i=0; i<n; i++){
        cons++;
        if(i == n-1 || brr[i+1] != brr[i]){
            if(consB.find(brr[i]) == consB.end()){
                consB[brr[i]] = cons;
            }else{
                consB[brr[i]] = max(consB[brr[i]], cons);
            }
            cons = 0;
        }
    }  

    ll ans = llmn;

    for(int i = 0; i < n; i++){
        ll temp = consA[arr[i]] + consB[arr[i]];
        ans = max(temp, ans);
    }

    for(int i = 0; i < n; i++){
        ll temp = consA[brr[i]] + consB[brr[i]];
        ans = max(temp, ans);
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
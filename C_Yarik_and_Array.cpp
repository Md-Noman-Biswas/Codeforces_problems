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

ll maxSubArraySum(vector<ll> &arr,  int size)
{
    ll max_so_far = llmn, max_ending_here = 0;
    for (int i = 0; i < arr.size(); i++) {
        max_ending_here = max_ending_here + arr[i];
        
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
            
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr;
    ll mx = llmn;
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        mx = max(mx, x);
        arr.push_back(x);
    }
    ll ans = llmn;
    ll sum = 0;
    vector<ll> hsh(n, 0);
    vector<ll> temp;
    for(int i = 0; i < n - 1; i++){
        if(abs((arr[i] % 2)) != abs((arr[i + 1] % 2))){
            if(hsh[i] == 0){
                temp.push_back(arr[i]);
                hsh[i] = 1;
            }
            if(hsh[i + 1] == 0){
                temp.push_back(arr[i + 1]);
                hsh[i + 1] = 1;
            }
        }else{
            if(temp.empty()) continue;
            ans = max(maxSubArraySum(temp, temp.size()), ans);
            temp.clear();
        }
    }
    ans = max(ans, maxSubArraySum(temp, temp.size()));
    ans = max(ans, mx);
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
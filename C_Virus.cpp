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

bool cmp(int a, int b){
    return a > b;
}

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(k);
    vector<ll> diff;
    for(int i = 0; i < k; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for(int i = 1; i < k; i++){
        diff.push_back(abs(arr[i] - arr[i - 1] - 1));
    }
    ll temp = (n - arr.back()) + (arr.front() - 1);
    if(temp != 0) diff.push_back(temp);
    sort(diff.begin(), diff.end(), cmp);
    ll past = 0;
    ll safe = 0;
    for(int i = 0; i < diff.size(); i++){
        ll temp = diff[i] - past * 4;
        past++;
        if(temp > 1){
            safe += temp - 1;
        }
        else if(temp == 1){
            safe += 1;
        }
    }
    cout << n - safe << nl;
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
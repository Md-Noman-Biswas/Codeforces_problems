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
    ll n, s;
    cin >> n >> s;
    vector<ll> arr(n);
    ll xd = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        xd += arr[i];
    }

    vector<ll> forward_hash(n, -1);
    ll last = -1;
    for(int i = n - 1; i >= 0; i--){
        if(arr[i] == 1){ 
            if(last != -1) forward_hash[i] = last;
            last = i;
        }else{
            forward_hash[i] = last;
        }
    }   

    if(xd < s){
        cout << -1 << nl;
        return;
    }
    if(xd == s){
        cout << 0 << nl;
        return;
    }

    queue<ll> q;
    ll sum = 0;
    ll ans = llmx;
    ll front = 0;
    for(int i = 0; i < n; i++){
        q.push(arr[i]);
        sum += arr[i];
        while(!q.empty() && sum > s){
            sum -= q.front();
            q.pop();
            front++;
        }
        if(sum == s){
            if(forward_hash[i] != -1){
                ll diff = front + n - forward_hash[i];
                ans = min(ans, diff);
            }else{
                ans = min(ans, front);
            }
        }
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
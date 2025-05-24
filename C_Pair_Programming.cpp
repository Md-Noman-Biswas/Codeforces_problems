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
    ll k, n, m;
    cin >> k >> n >> m;
    vector<ll> arr(n);
    vector<ll> brr(m);
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int j = 0; j < m; j++) cin >> brr[j];

    bool flag = true;
    vector<ll> ope;
    ll i = 0, j = 0;
    while(i < arr.size() || j < brr.size()){
        if(arr[i] == 0 && i < n){
            k++;
            i++;
            ope.push_back(0);
        }
        else if(brr[j] == 0 && j < m){
            j++;
            k++;
            ope.push_back(0);
        }
        else if(arr[i] <= k && i < n){
            ope.push_back((arr[i]));
            i++;
        }
        else if(brr[j] <= k && j < m){
            ope.push_back(brr[j]);
            j++;
        }else{
            flag = false;
            break;
        }
    }
    if(!flag){
        cout << -1 << nl;
    }else{
        for(auto it: ope){
            cout << it << " ";
        }
        cout << nl;
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
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
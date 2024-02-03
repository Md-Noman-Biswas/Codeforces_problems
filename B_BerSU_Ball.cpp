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
    for(int i=0; i<n; i++) cin >> arr[i];
    ll m;
    cin >> m;
    vector<ll> brr(m);
    for(int i=0; i<m; i++) cin >> brr[i];
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    
    int i = 0;
    int j = 0;
    ll cnt = 0;
    while(i < n && j < m){
        if(abs(arr[i] - brr[j]) <= 1){
            cnt++;
            i++;
            j++;
        }
        else if(brr[j] > arr[i]){
            i++;
        }
        else{
            j++;
        }
    }
    cout << cnt << nl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
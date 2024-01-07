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
    vector<ll> arr(5);
    ll sum = 0;
    for(int i=0; i<5; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    if(sum % 5 == 0 && sum != 0){
        cout << sum/5 << nl;
    }else{
        cout << -1 << nl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
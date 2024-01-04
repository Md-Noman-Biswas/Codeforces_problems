#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll neg = 0;
    bool flag = false;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] == 0){
            flag = true;
        }
        if(arr[i] < 0){
            neg++;
        }
    }
    if(neg % 2 != 0 || (flag == 1)){
        cout << 0 << nl;
    }else{
        cout << 1 << nl;
        cout << 1 << " " << 0 << nl;
    }
}

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
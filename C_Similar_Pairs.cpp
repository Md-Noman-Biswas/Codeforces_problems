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
    ll even = 0;
    ll odd = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    bool flag = false;
    if((even % 2 == 0) && (odd % 2 == 0)){
        YES;
        return;
    }else{
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++){
        if(abs(arr[i] - arr[i+1]) == 1){
            flag = true;
            break;
        }
    }

    if(flag){
        YES;
    }else{
        NO;
    }
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
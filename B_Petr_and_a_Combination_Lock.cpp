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
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }   

    bool flag = false;
    int subset_ct = (1<<n);
    for(int mask = 0; mask < subset_ct; mask++){
        ll sum = 0;
        for(int i=0; i<n; i++){
            if((mask & (1<<i)) != 0){
                sum += arr[i];
            }else{
                sum -= arr[i];
            }
        }
        if(sum % 360 == 0){
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

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
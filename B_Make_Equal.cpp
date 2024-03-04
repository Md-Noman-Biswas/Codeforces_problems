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
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    ll avg = sum / n;

    ll extra = 0;
    bool flag = true;
    for(int i = 0; i < n; i++){
        if(arr[i] >= avg){
            extra += arr[i] - avg;
        }else{
            ll temp = avg - arr[i];
            extra -= temp;
            if(extra < 0){
                flag = false;
                break;
            }
        }
    }

    if(flag) YES;
    else NO;
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
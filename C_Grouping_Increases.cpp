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
    vector<ll> sub1;
    vector<ll> sub2;
    ll prev1 = 0;
    ll prev2 = 0;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    if(n == 1 || n == 2){
        cout << 0 << nl;
        return;
    }

    sub1.pb(arr[0]);
    prev1 = arr[0];
    ll index = 0;
    for(int i=1; i<n; i++){
        index = i;
        if(arr[i] <= prev1){
            sub1.pb(arr[i]);
            prev1 = arr[i];
        }else{
            sub2.pb(arr[i]);
            prev2 = arr[i];
            break;
        }
    }
    if(index == n-1){
        cout << 0 << nl;
        return;
    }

    ll cnt = 0;

    for(int i=index + 1; i<n; i++){
        if((prev1 >= arr[i]) && (prev2 >= arr[i]) && (prev1 <= prev2)){
            sub1.pb(arr[i]);
            prev1 = arr[i];
        }
        else if((prev1 >= arr[i]) && (prev2 >= arr[i]) && (prev1 > prev2)){
            sub2.pb(arr[i]);
            prev2 = arr[i];
        }
        else if((prev1 >= arr[i]) && (prev2 < arr[i])){
            sub1.pb(arr[i]);
            prev1 = arr[i];
        }
        else if((prev2 >= arr[i]) && (prev1 < arr[i])){
            sub2.pb(arr[i]);
            prev2 = arr[i];
        }
        else if((prev1 < arr[i]) && (prev2 < arr[i])){
            if(prev1 > prev2){
                sub2.pb(arr[i]);
                prev2 = arr[i];
            }else{
                sub1.pb(arr[i]);
                prev1 = arr[i];
            }
        }
    }

    // for(auto it: sub1){
    //     cout << it << " ";
    // }
    // cout << nl;
    // for(auto it: sub2){
    //     cout << it << " ";
    // }
    // cout << nl;

    for(int i=0; i<sub1.size() - 1; i++){
        if(sub1[i] < sub1[i+1]){
            cnt++;
        }
    }
    for(int i=0; i<sub2.size() - 1; i++){
        if(sub2[i] < sub2[i+1]){
            cnt++;
        }
    }
    cout << cnt << nl;
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
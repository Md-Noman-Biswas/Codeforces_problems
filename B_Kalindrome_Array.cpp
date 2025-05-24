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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    if(n <= 2){
        YES;
        return;
    }

    ll l = 0;
    ll r = n - 1;
    ll target;
    while(l < r){
        if(arr[l] != arr[r]){
            target = arr[r];
            break;
        }else{
            l++;
            r--;
        }
    }
    l = 0, r = n - 1;
    bool flag1 = true;
    while(l < r){
        if(arr[l] == target){
            l++;
            continue;
        }
        else if(arr[r] == target){
            r--;
            continue;
        }
        else if(arr[l] == arr[r]){
            l++;
            r--;
        }
        else if(arr[l] != arr[r]){
            flag1 = false;
            break;
        }
    }
    l = 0;
    r = n - 1;
    while(l < r){
        if(arr[l] != arr[r]){
            target = arr[l];
            break;
        }else{
            l++;
            r--;
        }
    }
    bool flag2 = true;
    while(l < r){
        if(arr[l] == target){
            l++;
            continue;
        }
        else if(arr[r] == target){
            r--;
            continue;
        }
        else if(arr[l] == arr[r]){
            l++;
            r--;
        }
        else if(arr[l] != arr[r]){
            flag2 = false;
            break;
        }
    }

    if(flag1 || flag2) YES;
    else NO;

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
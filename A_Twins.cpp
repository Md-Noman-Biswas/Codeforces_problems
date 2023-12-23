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
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    ll sum = 0;
    ll cnt = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    ll sum2 = 0;
    ll temp = sum/2;
    for(int i=0; i<n; i++){
        if(sum2 > sum/2) break;
        sum2 += arr[i];
        cnt++;
    }
    //cout << sum << " " << sum2  << " " << temp << nl;
    cout << cnt << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
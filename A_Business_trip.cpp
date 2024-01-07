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
    ll k;
    cin >> k;
    vector<ll> arr(12);
    for(int i=0; i<12; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    if(k == 0){
        cout << 0 << nl;
    }   
    else{
        ll sum = 0;
        ll cnt = 0;
        ll index = 11;
        while(cnt < 12){
            sum += arr[index];
            index--;
            cnt++;
            if(sum >= k) break;
        }
        if(sum < k){
            cout << -1 << nl;
        }else{
            cout << cnt << nl;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
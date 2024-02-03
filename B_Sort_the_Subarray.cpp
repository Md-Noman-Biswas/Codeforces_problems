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
    vector<ll> arr(n + 1);
    vector<ll> brr(n + 1);

    for(int i = 1; i <= n; i++) cin >> arr[i];
    for(int i = 1; i <= n; i++) cin >> brr[i];

    ll left = 0;
    ll right = n;
    for(int i = 1; i <= n; i++){
        if(arr[i] != brr[i]){
            left = i;
            break;
        }
    }

    for(int i = n; i > 0; i--){
        if(arr[i] != brr[i]){
            right = i;
            break;
        }
    }

    while(left > 1 && brr[left] >= brr[left - 1]){
        left--;
    }

    while(right < n && brr[right] <= brr[right + 1]){
        right++;
    }


    cout << left << " " << right << nl;

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
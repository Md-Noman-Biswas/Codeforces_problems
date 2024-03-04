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
    for(int i = 1; i <= n; i++) cin >> arr[i];
    ll q;
    cin >> q;
    vector<ll> change(n + 1, -1);
    for(int i = n - 1; i >= 1; i--){
        if(arr[i] != arr[i + 1]){
            change[i] = i + 1; 
        }
        else{
            change[i] = change[i + 1];
        }
    }

    while(q--){
        ll l, r;
        cin >> l >> r;
        ll ind1 = -1;
        ll ind2 = -1;
        if(change[l] != -1 && change[l] <= r){
            ind1 = l;
            ind2 = change[l];
        }
        cout << ind1 << " " << ind2 << nl;
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
        cout << nl;
    }
    return 0;
}

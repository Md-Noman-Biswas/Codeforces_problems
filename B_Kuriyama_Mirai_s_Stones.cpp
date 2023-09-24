#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1073741824 ;
const int N = 1e6 + 7;

ll pref1[N];
ll pref2[N];

void solve(){
    ll n; 
    cin >> n;
    vector<ll> arr(n+1);

    for(int i=1; i<=n; i++){
        cin >> arr[i];
        pref1[i] = pref1[i-1] + arr[i];
    }

    sort(arr.begin(), arr.end());

    for(int i=1; i<=n; i++){
        pref2[i] = pref2[i-1] + arr[i];
    }
    // for(int i=1; i<=n; i++){
    //         cout << pref2[i] << " ";
    // }
    // cout << "\n";

    // for(int i=1; i<=n; i++){
    //     cout << pref1[i] << " ";
    // }
    // cout << "\n";

    ll q;
    cin >> q;
    while(q--){
        int type, l, r;
        cin >> type >> l >> r;
        if(type == 2){
            cout << pref2[r] - pref2[l-1] << "\n";
        }else{
            cout << pref1[r] - pref1[l-1] << "\n";
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

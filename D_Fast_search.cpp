#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int q;
    cin >> q;
    while(q--){
        int x; cin >> x;
        int y; cin >> y;

        auto it1 = lower_bound(arr.begin(), arr.end(), x);
        auto it2 = upper_bound(arr.begin(), arr.end(), y);
        cout << it2 - it1 << " ";
    }
    cout << nl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
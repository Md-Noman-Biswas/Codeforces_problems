#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(int n, int arr[], int brr[], int k){
    for(int i=0; i<n; i++){
        if(arr[i] - brr[i] != k)
        return (arr[i] - brr[i]) <= k;
    }
    return false;
}
void solve(){
    map<int,int> mp;
    ll n; cin >> n;
    ll k; cin >> k;
    vector<int> arr(n);
    vector<int> brr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=0; i<n; i++) cin >> brr[i];
    sort(brr.begin(), brr.end(), cmp);
    for(auto it: brr){
        cout << it << " ";
    }
    cout << "\n";
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
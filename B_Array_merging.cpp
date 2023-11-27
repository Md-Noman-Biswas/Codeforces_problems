#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    vector<ll> brr(n);

    for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=0; i<n; i++) cin >> brr[i];

    map<int, int> consA, consB;

    int cons = 0;
    for(int i=0; i<n; i++){
        cons++;
        if(i == n-1 || arr[i+1] != arr[i]){
            if(consA.find(arr[i]) == consA.end()){
                consA[arr[i]] = cons;
            }else{
                consA[arr[i]] = max(consA[arr[i]], cons);
            }
            cons = 0;
        }
    }

    cons = 0;
    for(int i=0; i<n; i++){
        cons++;
        if(i == n-1 || brr[i+1] != brr[i]){
            if(consB.find(brr[i]) == consB.end()){
                consB[brr[i]] = cons;
            }else{
                consB[brr[i]] = max(consB[brr[i]], cons);
            }
            cons = 0;
        }
    }

    int ans = 0;
    for(auto it:consA){
        ans=max(ans,(consA[it.first]+consB[it.first]));
      }
      for(auto it:consB){
        ans=max(ans,(consA[it.first]+consB[it.first]));
      }
    cout << ans << nl;
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
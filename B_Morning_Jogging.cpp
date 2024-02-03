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
    ll n, m;
    cin >> n >> m;
    vector<ll> arr[n+4];
    vector<ll> ans[n+4];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            ll x;
            cin >> x;
            arr[i].push_back(x);
        }
    }  

    for(int i = 0; i < n; i++){
        sort(arr[i].begin(), arr[i].end());
    } 
    ll r = m;
    while(r--){
        ll mn = llmx;
        ll ind = -1;

        for(int j = 0; j < n; j++){
            if(mn > arr[j][0]){
                mn = arr[j][0];
                ind = j;
            }
        }

        for(int j = 0; j < n; j++){
            if(j == ind){
                ans[j].push_back(*(arr[j].begin()));
                arr[j].erase(arr[j].begin());
            }else{
                ans[j].push_back(*(arr[j].end() - 1));
                arr[j].pop_back();
            }
        }
    }

    for(auto it: ans){
        if(!it.empty()){
            for(auto xd: it){
                cout << xd << " ";
            }
            cout << nl;
        }
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
    }
    return 0;
}

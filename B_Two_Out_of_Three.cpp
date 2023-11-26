#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    int cnt = 0;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    vector<int> v;
    for(auto it: mp){
        if(it.second >= 2){
            v.push_back(it.first);
        }
    }
    if(v.size() < 2){
        cout << -1 << nl;
        return;
    }else{
        for(auto it: arr){
            if(it == v[0]){
                cout << 2 << " ";
                v[0] = -1;
            }
            else if(it == v[1]){
                cout << 3 << " ";
                v[1] = -1;
            }else{
                cout << 1 << " ";
            }
        }
    }
    cout << nl;
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
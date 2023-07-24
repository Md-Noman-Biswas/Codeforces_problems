#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<vector<int>> v(n);
    int q;
    cin >> q;
    int o,t,x;
    while(q--){
        cin >> o;
        if(o == 0){
            cin >> t;
            cin >> x;
            v[t].push_back(x);
        }
        else if(o == 1){
            cin >> t;
            int s = v[t].size();
            // for(auto it: v[t]){
            //     cout << it << " ";
            // }
            for(int i = 0; i<s; i++){
                cout  << v[t][i];
                if(i != s-1){
                    cout << " ";
                }
            }
            cout << "\n";
        }
        else if(o == 2){
            cin >> t;
            v[t].clear();
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, q;
    cin >> n;
    vector<priority_queue<int>> mq(n);
    cin >> q;
    int o,t,x;
    while(q--){
        cin >> o;
        if(o == 0){
            cin >> t;
            cin >> x;
            mq[t].push(x);
        }
        else if(o == 1){
            cin >> t;
            if(!mq[t].empty()){
                cout << mq[t].top() << "\n";
            }
        }
        else if(o == 2){
            cin >> t;
            if(!mq[t].empty()){
                mq[t].pop();
            }
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
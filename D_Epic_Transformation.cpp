#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5;
void solve(){
    int n;
    cin >> n;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        mp[x]++;
    }

    priority_queue<int> q;

    for(auto it: mp){
        q.push(it.second);
    }

    while(q.size() >= 2){
        int a = q.top();
        q.pop();
        int b = q.top();
        q.pop();
        a--;
        b--;
        if(a) q.push(a);
        if(b) q.push(b);
    }
    if(q.size() == 1){
        cout << q.top() << "\n";
    }else{
        cout << q.size() << "\n";
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

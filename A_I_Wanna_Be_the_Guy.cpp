#include<bits/stdc++.h>
using namespace std;
void solve(){
    int max_lev;
    cin >> max_lev;
    int a, b;
    cin >> a;
    set<int> s;
    for(int i=0; i<a; i++){
        int v;
        cin >> v;
        s.insert(v);
    }
    cin >> b;
    vector<int> arr2(b);
    for(int i=0; i<b; i++){
        int v; 
        cin >> v;
        s.insert(v);
    }
    if(s.size() == max_lev) cout << "I become the guy." << "\n";
    else cout << "Oh, my keyboard!" << "\n";

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
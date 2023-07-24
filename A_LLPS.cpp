#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    vector<string> sp;
    sp.push_back(s);
    char max = *max_element(s.begin(), s.end());
    //cout << max << "\n";
    int cnt = count(s.begin(), s.end(), max);
    //cout << cnt << "\n";
    for(int i=0; i<cnt; i++){
        cout << max;
    }
    cout << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
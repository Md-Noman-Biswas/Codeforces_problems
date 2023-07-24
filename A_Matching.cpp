#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int ans;
    int size = s.size();
    int cnt = count(s.begin(), s.end(), '?');
    //cout << cnt;
       vector<int> v;
    for(int i=0; i<size; i++){
        if(s[i] == '?'){
            v.push_back(i);
        }
    }
    if(cnt == 0 && size == 1 && s[0] != '0'){
        cout << 1 << "\n";
    }
    else if(s[0] == '0'){
        cout << 0 << "\n";
    }
    else if(size == 1 && s[0] == '?'){
        cout << 9 << "\n";
    }
    else if(size == 2 && cnt == 2){
        cout << 90 << "\n";
    }
    else if(v.size() == 2 && v[0] != 0){
        int ans = pow(10,2);
        cout << ans << "\n";
    }
    else if(v.size() == 2 && v[0] == 0){
        ans = pow(10,2) - 10;
        cout << ans << "\n";
    }
    else if(v.size() == 3 && v[0] != 0){
        ans = pow(10,3);
        cout << ans << "\n";
    }
    else if(v.size() == 3 && v[0] == 0){
        ans = pow(10,3) - 100;
        cout << ans << "\n";
    }
    else if(v.size() == 4 && v[0] != 0){
        ans = pow(10, 4);
        cout << ans << "\n";
    }
    else if(v.size() == 4 && v[0] == 0){
        ans = pow(10,4) - 1000;
        cout << ans << "\n";
    }
    else if(v.size() == 5){
        ans = pow(10,5);
        cout << ans << "\n";
    }
    else if(v.size() == 1){
        cout << 9 << "\n";
    }
    else if(v.size() == 0){
        cout << 1 << "\n";
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
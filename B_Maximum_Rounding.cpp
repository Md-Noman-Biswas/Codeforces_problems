#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    string f;
    cin >> f;
    reverse(f.begin(), f.end());
    f.push_back('0');
    reverse(f.begin(), f.end());
    //cout << f;
    int n = f.size() - 1;
    int mask = n;
    for(int i=n; i>=0; i--){
        if(f[i] >= '5'){
            f[i-1]++;
            for(int j = i; j <= mask; j++){
               f[j] = '0'; 
            }
            mask = i;
        }
    }
    int it = 0;
    if(f[0] == '0'){
        it++;
    }
    for(it ; it < f.size(); it++ ){
        cout << f[it];
    }
    cout << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
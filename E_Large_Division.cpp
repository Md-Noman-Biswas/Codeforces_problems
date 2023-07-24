#include<bits/stdc++.h>
using namespace std;
#define ll long long
int cs = 0;
void solve(){
    cs++;
    string a;
    cin >> a;
    ll b;
    cin >> b;
    b = abs(b);
    bool flag = false;
    ll rem = 0;
    for(int i=0; i<a.size(); i++){
        if(a[i] == '-'){
            i = i+1;
        }
        rem = rem * 10 + (a[i] - '0');
        rem %= b;
    }
    if(rem == 0){
        flag = true;
    }else{
        flag = false;
    }
    if(flag){
        cout << "Case " << cs << ": " << "divisible" << "\n";
    }else{
        cout << "Case " << cs << ": " << "not divisible" << "\n";
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
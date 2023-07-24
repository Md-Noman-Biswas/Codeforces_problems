#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    int total_food = x + y;
    int required_unifood = 0;
    if(x-a > 0){
        required_unifood += (x-a);
    } 
    if(y-b > 0){
        required_unifood += (y-b);
    } 
    //int ans = abs(required_unifood);
    if(c >= required_unifood){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }

}
int main(){
    int t;
    cin >> t;
    while(t--){
    solve();
    }
}
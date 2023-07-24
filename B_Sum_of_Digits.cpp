#include<bits/stdc++.h>
using namespace std;
#define ll long long
int digitSum(int n){
    int temp = 0;
    int ans = 0;
    while(n){
        temp = n%10;
        ans += temp;
        n /= 10;
    }
    return ans;
}
void solve(){
    string n;
    cin >> n;
    int sum = 0;
    int cnt = 0;
    if(n.size() == 1){
        cout << 0 << "\n";
        return;
    }
    else{
        for(int i=0; i<n.size(); i++){
        sum += (n[i] - '0');
        }
        cnt++;
    }
    //cout << sum << "\n";
    int tp = sum;
    while(tp > 9){
        tp = digitSum(tp);
        cnt++;
    }
    cout << cnt << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
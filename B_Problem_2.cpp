#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    int x;
    cin >> n;
    cin >> x;
    char sign;
    int val;
    int sum=0;
    int cnt = 0;
    while(n--){
        cin >> sign;
        cin >> val;
        if(sign == '+'){
            sum += val;
            break;
            //cout << sum << "\n";
        }
        if(sign == '-'){
            sum -= val;
            break;
            //cout << sum << "\n";
        }
        if(sum < val){
            cnt++;
        }
    }
    cout << sum << " " << cnt << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
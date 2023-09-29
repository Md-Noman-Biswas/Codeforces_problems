#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    int n;
    cin >> n;
    
    deque<int> dq1;
    deque<int> dq2;

    int x1; 
    cin >> x1;
    while(x1--){
        int temp;
        cin >> temp;
        dq1.push_back(temp);
    }

    int x2; 
    cin >> x2;
    while(x2--){
        int temp2;
        cin >> temp2;
        dq2.push_back(temp2);
    }
    
    int cnt = 0;
    int status;
    while(true){
        cnt++;
        int a = dq1.front();
        int b = dq2.front();
        // cout << "a-> " << a << nl;
        // cout << "b-> " << b << nl;
        dq1.pop_front();
        dq2.pop_front();
        if(b > a){
            dq2.push_back(a);
            dq2.push_back(b);
        }else{
            dq1.push_back(b);
            dq1.push_back(a);
        }
        if(dq1.empty()){
            status = 2;
            break;
        }
        if(dq2.empty()){
            status = 1;
            break;
        }
        if(cnt > 1e5){
            cout << -1 << "\n";
            return;
        }
    }
    cout << cnt << " " << status << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
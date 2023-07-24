#include<bits/stdc++.h>
using namespace std;
void solve(){
    int year;
    cin >> year;
    string n;
    while(1){
        year++;
        n = to_string(year);
        if(n[0] != n[1] && n[0] != n[2] && n[0] != n[3] && n[1] != n[2] && n[1] != n[3] && n[2] != n[3]){
            break;
        }
    }
    cout << n << "\n";
}
int main(){
    solve();
}
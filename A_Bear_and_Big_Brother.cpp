#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin >> a >> b;
    //int sum1=0, sum2=0;
    int i=1;
    for(i=1; i<=10; i++){
            a = a*3;
            b = b*2;
            if(a>b)
            break;
            //i=i;
        }
    cout << i << "\n";
}
int main(){
    solve();
}
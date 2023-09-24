#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int arr[n];
    double x;
    double sum = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        x = (((double)arr[i])/100.0);
        sum += x;
    }
    double ans = (sum/n)*100;
    cout << fixed << setprecision(12) << ans << "\n";
    
}
   
int main(){
   solve();
}
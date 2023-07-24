#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n;
   cin >> n;
   int final = 0,sum1 = 0,sum2 = 0,sum3 = 0;
   int arr[n];
   for(int i=0; i<n; i++){
    cin >> arr[i];
   }
   for(int i=0; i<n; i++){
        final+=arr[i];
   }
   bool status1 = 0;
   bool status2 = 0;
   bool status3 = 0;
   int ans = -1000000000;
    for(int i=0; i<n; i++){
        if(arr[i] == -1 && arr[i+1] == -1){
            sum1 = final + (2*2);
            ans = max(ans,sum1);
            status1 = 1;
        }
        else if(arr[i] == 1 && arr[i+1] == 1){
            sum2 = final + (-2*2);
            ans = max(ans,sum2);
            status2 = 1;
        }
        else if(arr[i] == 1 && arr[i+1] == -1){
            sum3 = final + (2*0);
            ans = max(ans,sum3);
            status3 = 1;
        } 
   }
   if(status1 == 1) cout << sum1 << "\n";
   else if(status2 == 1) cout << sum2 << "\n";
   else if(status3 == 1) cout << sum3 << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n;
   cin >> n;
   vector<int> arr(n);
   for(int i=0; i<n; i++){
    cin >> arr[i];
   }
   int avg = 0;
   int sum = 0;
   for(int i=0; i<n; i++){
    sum += arr[i];
   }
   avg = sum/n;
   int cnt = 0;
   if(sum % n != 0){
    cout << -1 << "\n";
   }else{
   for(int i=0; i<n; i++){
    if(arr[i]>avg){
        cnt++;
    }
   }
   cout << cnt << "\n";
}
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n;
   cin >> n;
   vector<int> arr(n);
   for(int i=0; i<n; i++){
    cin >> arr[i];
   }
   int start=0,end= n - 1;
   for(int i=0; i<n; i++){
    if(arr[i] == 0) break;
    start = i;
    }
    for(int i=n-1; i >= 0; i--){
        if(arr[i] == 0) break;
        end = i;
    }
   cout << max(0,(end - start)) << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


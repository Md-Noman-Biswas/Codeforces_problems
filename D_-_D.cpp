#include <bits/stdc++.h>
using namespace std;
void solve  (){
    int n;
    cin >> n;
    int arr[n];
        int sum = 0;
 
        for(int i = 1; i <= n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
 
        int ans = -100000000;
 
        for(int i = 1; i < n; i++) {
            if(arr[i] == arr[i+1]) {
                if(arr[i] == 1) ans = max(ans, sum-4);
                else ans = max(ans, sum+4);
            }
            else
                ans = max(ans, sum);
        }
 
        cout << ans << "\n";
}
int main()
{
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<int> arr(n);
    long long sum=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    long long sum2 = (n*(n+1))/2;
    cout << sum2 - sum << "\n";
}
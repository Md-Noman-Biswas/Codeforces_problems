#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    //Kadane’s Algorithm
    ll max_ending_here = 0;
    ll max_so_far = INT_MIN;
    for(int i=0; i<n; i++){
        max_ending_here = max_ending_here + arr[i];
        if(max_ending_here > max_so_far){
            max_so_far = max_ending_here;
        }
        if(max_ending_here < 0){
            max_ending_here = 0;
        }
    }
    cout <<  max_so_far << "\n";
}
int main(){
    solve();
}
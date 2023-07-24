#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int k; 
    cin >> k;
    int f;
    vector<int> can_attend;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        f = 5 - arr[i];
        if(f>=k){
        can_attend.push_back(f);
        }
    }
    cout << can_attend.size()/3 << "\n";
}
int main(){
    solve();
}
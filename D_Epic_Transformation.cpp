#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5;
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    
    // Initialize an array to store frequencies of elements
    vector<int> freq(N, 0);
    
    for(int i=0; i<n; i++){
        cin >> v[i];
        freq[v[i] - 1]++;  // Subtract 1 to get the correct index and increment the frequency count
    }
    
    for(int i=0; i<n; i++){
        cout << v[i] << "-> " << freq[v[i] - 1] << " "; // Subtract 1 to get the correct index and print the frequency
    }
    cout << "\n";
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

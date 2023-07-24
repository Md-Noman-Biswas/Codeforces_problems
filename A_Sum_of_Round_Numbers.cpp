#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
void solve(){
    string n;
    cin >> n;
    reverse(n.begin(), n.end());
    int s;
    vector <int> ans;
    for(int i=0; i<n.size(); i++){
        int d = n[i] - '0';
        if(d != 0){
            s = d * pow(10,i);
            ans.push_back(s);
        }
    }
    cout << ans.size() << "\n";
    for(auto it: ans){
        cout << it << " ";
    }
    cout << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
    solve();
    }
}
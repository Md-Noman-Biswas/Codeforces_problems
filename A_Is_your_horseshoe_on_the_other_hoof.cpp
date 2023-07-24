#include<bits/stdc++.h>
using namespace std;
void solve(){
   set<int> s;
   for(int i=0; i<4; i++){
    int n;
    cin >> n;
    s.insert(n);
   }
   int p = s.size();
   cout << 4-p << "\n";

}
int main(){
    solve();
}
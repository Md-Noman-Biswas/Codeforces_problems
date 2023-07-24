#include<bits/stdc++.h>
using namespace std;
void solve(){
   string a;
   cin >> a;
   string b;
   cin >> b;
   vector<int> arr;
   for(int i=0; i<a.size(); i++){
            if(a[i] != b[i])
            arr.push_back(1);
            else
            arr.push_back(0);
   }
   for (auto it = arr.begin(); it != arr.end(); ++it)
        cout << *it;
}
int main(){

        solve();
}


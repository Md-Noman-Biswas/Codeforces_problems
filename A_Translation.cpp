#include<bits/stdc++.h>
using namespace std;
void reverseStr(string& str)
{
    int n = str.length();
  
    // Swap character starting from two
    // corners
    for (int i = 0; i < n/2 ; i++)
        swap(str[i], str[n - i - 1]);
}
void solve(){
    string n,p;
    cin >> n >> p;
    reverseStr(n);
    //cout << n << "\n";
    if(n==p){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }
}
int main(){
    solve();
}
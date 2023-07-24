#include <bits/stdc++.h>
using namespace std;
void solve(int n, int k, string S){
   int i;
   int x = S.find('G');
   int y = S.find('T');
   if (x > y)
      swap(x, y);
   for (i = x; i < y; i += k){
      if (S[i] == '#')
         break;
   }
   if (i == y)
      cout << "YES" << "\n";
   else
      cout << "NO" << "\n";
}
int main(){
    int n,k;
    cin >> n;
    cin >> k;
   string S;
   cin >> S;
    solve(n,k,S);
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

int sumofdigits(int n)
{
  int s=0,rem=0;
  while(n>0)
  {
     rem=n%10;
     s+=rem;	  	  
     n=n/10;
  }
  return s;
}

void solve(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=10; i<=11100000; i++){
        if(sumofdigits(i) == 10){
            arr.push_back(i);
        }
    }
    cout << arr[n-1] << nl;   
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
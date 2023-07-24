#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long

unsigned long long mult(unsigned long long a, unsigned long long b, unsigned long long m){
    unsigned long long ans;
    ans = ((a % m) * (b % m)) % m;
    return ans;
}

void solve(){
    unsigned long long a, b, m;
    cin >> a >> b >> m;
    cout << mult(a,b,m) << "\n";
}
   
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
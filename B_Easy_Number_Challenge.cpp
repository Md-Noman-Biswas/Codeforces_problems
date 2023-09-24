#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1073741824 ;
const int N = 1e6 + 7;
vector<int> divs(N,0);

void div_count(ll a, ll b, ll c){
    ll n = a*b*c;
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j+=i){
            divs[j]++;
        }
    }
}

void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    div_count(a, b, c);
    ll sum = 0;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            for(int k=1; k<=c; k++){
                ll temp = i*j*k;
                sum += (divs[temp] % M);
            }
        }
    }
    cout << sum << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}

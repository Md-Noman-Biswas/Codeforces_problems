#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

void solve(){
    int n, t;
    cin >> n >> t;
    vector<int> arr(n);
    for(int i=1; i<n; i++){
        cin >> arr[i];
    }
    int x = 1;
    bool flag = false;
    while(x < n){
        x += arr[x];
        if(x == t){
            flag = true;
            break;
        }
    }
    if(flag) YES;
    else NO;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
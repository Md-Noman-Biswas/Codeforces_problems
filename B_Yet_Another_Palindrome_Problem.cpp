#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 5000+7;

void solve(){
    ll n;
    cin >> n;
    vector<ll> v[N];
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v[x].push_back(i);
    }
    bool flag = false;
    for(auto it: v){
        if(!it.empty()){
            if(abs(it.back() - it.front()) > 1){
                flag = true;
                break;
            }
        }
    }
    if(flag){
        YES;
    }else{
        NO;
    }
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
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
const int N = 1e5 + 7;

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    vector<string> ans;
    string temp;
    for(int i = 0; i < 200; i++){
        temp.push_back('a');
    }
    ans.push_back(temp);
    
    for(int i = 0; i < n; i++){
        string xd = ans.back();
        ll index = arr[i];
        if(xd[index] == 'a'){
            xd[index] = 'b';
        }else{
            xd[index] = 'a';
        }
        ans.push_back(xd);
    }
    for(auto it: ans){
        cout << it << nl;
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
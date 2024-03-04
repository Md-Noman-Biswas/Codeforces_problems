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
    map<char, ll> mp;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 'a'; i <= 'z'; i++){
        mp[i] = 0;
    }
    string ans;
    for(int i = 0; i < n; i++){
        for(auto it: mp){
            if(it.second == arr[i]){
                ans.push_back(it.first);
                mp[it.first]++;
                break;
            }
        }
    }
    cout << ans << nl;
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
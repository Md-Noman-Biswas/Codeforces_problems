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
    vector<ll> even;
    vector<ll> odd;
    vector<bool> index(n);
    vector<ll> ans;

    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        if(x % 2 == 0){
            index[i] = true;
            even.pb(x);
        }else{
            index[i] = false;
            odd.pb(x);
        }
    }  
    
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    
    auto it1 = even.begin();
    auto it2 = odd.begin();
    for(int i = 0; i < n; i++){
        if(index[i] == 1){
            ans.pb(*it1);
            it1++;
        }else{
            ans.pb(*it2);
            it2++;
        }
    }
    if(is_sorted(ans.begin(), ans.end())){
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
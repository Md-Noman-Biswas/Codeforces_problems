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
    sort(arr.begin(), arr.end());

    ll alice = 0;
    ll bob = 0;
    bool flag = true;
    
    for(int i = n - 1; i >= 0; i--){
        if(flag){
            if(arr[i] % 2 == 0){
                alice += arr[i];
            }
            flag = false;
        }else{
            if(arr[i] % 2 != 0){
                bob += arr[i];
            }
            flag = true;
        }
    }   

    if(alice > bob){
        cout << "Alice" << nl;
    }
    else if(alice < bob){
        cout << "Bob" << nl;
    }else{
        cout << "Tie" << nl;
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
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
    ll mx = llmn;

    for(int i=0; i<n; i++){

        cin >> arr[i];
        if(mx < arr[i]){
            mx = arr[i];
        }
        
    }

    ll current_enz = 0;
    ll cost = 0;
    ll prev = 0;

    for(int i=0; i<n; i++){

        current_enz += prev - arr[i];
        if(current_enz < 0){
            cost += abs(current_enz);
            current_enz = 0;
        }
        prev = arr[i];

    }   

    cout << cost << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
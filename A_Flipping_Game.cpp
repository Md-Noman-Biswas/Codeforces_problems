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

    ll zero = 0;
    ll one = 0;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] == 1) arr[i] = -1, one++;
        if(arr[i] == 0) arr[i] = 1;
    }

    ll past = 0;
    ll best = llmn;

    //KADANE's Algorithm
    for(int i=0; i<n; i++){
        if(past + arr[i] >= arr[i]){
            past += arr[i];
        }else{
            past = arr[i];
        }
        best = max(best, past);
    }

    cout << best + one << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
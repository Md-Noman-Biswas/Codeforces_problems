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
const int N = 1e6 + 9, M = 1e6;


vector<ll> multiple(N);
vector<ll> arr(N);

void solve(){
    ll n;
    cin >> n;
    map<ll, ll> mp;
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        arr[x]++;
    }   
    for(int i = 1; i < N; i++){
        for(int j = i; j < N; j += i){
            multiple[i] += arr[j];
        }
    }

    for(int i = 1; i <= M; i++){
        cout << multiple[i] << " ";
    }
    cout << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
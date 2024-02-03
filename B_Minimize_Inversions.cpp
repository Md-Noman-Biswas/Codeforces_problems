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

bool cmp(pair<ll, ll> p1, pair<ll, ll> p2){
    return p1.first < p2.first;
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    vector<ll> brr(n);
    vector<pair<ll, ll>> pr;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        cin >> brr[i];
    }   

    for(int i = 0; i < n; i++){
        pr.pb({arr[i], brr[i]});
    }
    sort(pr.begin(), pr.end(), cmp);
    for(auto it: pr){
        cout << it.first << " ";
    }
    cout << nl; 
    for(auto it: pr){
        cout << it.second << " ";
    }
    cout << nl;
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
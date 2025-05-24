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
    ll n, k;
    cin >> n >> k;
    vector<ll> left(n);
    vector<ll> right(n);

    map<ll, ll> mpl;
    map<ll, ll> mpr;

    for(int i = 0; i < n; i++){
        cin >> left[i];
        mpl[left[i]]++;
    }   

    for(int i = 0; i < n; i++){
        cin >> right[i];
        mpr[right[i]]++;
    }

    vector<ll> ansl;
    vector<ll> ansr;

    for(auto it: mpl){
        if(it.second == 2){
            ansl.push_back(it.first);
            ansl.push_back(it.first);
        }
    }

    for(auto it: mpr){
        if(it.second == 2){
            ansr.push_back(it.first);
            ansr.push_back(it.first);
        }
    }


    for(auto it: mpl){
        if(it.second == 1){
            ansl.push_back(it.first);
            ansr.push_back(it.first);
        }
    }

    // for(auto it: ansl){
    //     cout << it << " ";
    // }
    // cout << nl;
    // for(auto it: ansr){
    //     cout << it << " ";
    // }


    for(int i = 0; i < 2 * k; i++){
        cout << ansl[i] << " ";
    }
    cout << nl;
    for(int i = 0; i < 2 * k; i++){
        cout << ansr[i] << " ";
    }
    cout << nl;

}

/* Hey you should check this out
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * do something instead of nothing and stay organized
    * bruteforce to find pattern
    * DON'T GET STUCK ON ONE APPROACH
    * Think the problem backwards
    * In practice time don't see failing test case
*/

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
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

ll next_multiple_of_3(ll n){
    ll temp = ceil(n / (3 * 1.0));
    return temp * 3;
}

ll next_multiple_of_5(ll n){
    ll temp = ceil(n / (5 * 1.0));
    return temp * 5;
}

ll next_multiple_of_4(ll n){
    ll temp = ceil(n / (4 * 1.0));
    return temp * 4;
}

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    ll even = 0;
    ll odd = 0;
    ll multiple_of_3 = 0;
    ll multiple_of_5 = 0;
    ll multiple_of_4 = 0;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] % 3 == 0) multiple_of_3++;
        if(arr[i] % 5 == 0) multiple_of_5++;
        if(arr[i] % 4 == 0) multiple_of_4++;
        if(arr[i] % 2 == 0) even++;
        if(arr[i] % 2 != 0) odd++;
    }

    if(k == 2){
        if(even > 0){
            cout << 0 << nl;
        }else{
            cout << 1 << nl;
        }
    }
    else if(k == 4){
        if(even >= 2 || multiple_of_4 > 0){
            cout << 0 << nl;
        }else{
            ll ope = llmx;
            for(int i = 0; i < n; i++){
                ll diff = abs(arr[i] - next_multiple_of_4(arr[i]));
                ope = min(ope, diff);
            }
            ll ope2 = 2 - even;
            cout << min(ope, ope2) << nl;
        }
    }
    else if(k == 3){
        if(multiple_of_3 > 0){
            cout << 0 << nl;
        }else{
            ll ope = llmx;
            for(int i = 0; i < n; i++){
                ll diff = abs(arr[i] - next_multiple_of_3(arr[i]));
                ope = min(ope, diff);
            }
            cout << ope << nl;
        }
    }else{
        if(multiple_of_5 > 0){
            cout << 0 << nl;
        }else{
            ll ope = llmx;
            for(int i = 0; i < n; i++){
                ll diff = abs(arr[i] - next_multiple_of_5(arr[i]));
                ope = min(ope, diff);
            }
            cout << ope << nl;
        }
    }

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
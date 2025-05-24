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
const int INF = 1e9 + 10;

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll even = 0;
    ll odd = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) even++;
        else odd++;
    }

    if (even == n || odd == n) {
        cout << 0 << nl;
        return;
    }

    sort(arr.begin(), arr.end());
    ll last_odd = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 2 == 1) {
            last_odd = i;
            break;
        }
    }

    ll ope = 0;
    ll current_odd = arr[last_odd];
    for (int i = 0; i < last_odd; i++) {
        if (arr[i] % 2 == 0) {
            ope += 1;
            current_odd += arr[i];
        }
    }
    bool flag = false;
    //cout << current_odd << nl;
    for (int i = last_odd + 1; i < n; i++) {
        //cout << current_odd << nl;
        if (arr[i] > current_odd || flag == true) {
            flag = true;
            if (i == n - 1) {
                ope += 2;
                break;
            }
            else {
                ope++;
            }
        }
        else if(flag == false){
            current_odd += arr[i];
            ope++;
        }
    }
    cout << ope << nl;
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
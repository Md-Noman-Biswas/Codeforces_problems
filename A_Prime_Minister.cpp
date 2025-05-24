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
    vector<ll> test_subjects;
    ll sum = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
        if (i > 0) {
            if (arr[i] <= arr[0] / 2) {
                ll ind = i;
                test_subjects.push_back(++ind);
            }
        }
    }
    ll avg = sum / 2;
    if (arr[0] > avg) {
        cout << 1 << nl;
        cout << 1 << nl;
    }
    else {
        ll total = arr[0];
        for (auto it: test_subjects) {
            total += arr[--it];
        }

        if (test_subjects.empty() || total <= avg) {
            cout << 0 << nl;
            return;
        }
        cout << test_subjects.size() + 1 << nl;
        cout << 1 << " ";
        for (auto it: test_subjects) {
            cout << it << " ";
        }
        cout << nl;
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
    solve();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "Yes\n"
#define NO cout << "No\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll sqr = sqrt(n);
    if (sqr * sqr != n) {
        NO;
        return;
    }   

    char arr[sqr][sqr];

    //cout << sqr << nl;

    ll last = 0;
    for (int i = 0; i < sqr; i++) {
        ll cnt = 0;
        for (; last < n;) {
            //cout << last << nl;
            arr[i][last % sqr] = s[last];
            last++;
            cnt++;
            if (cnt == sqr) break;
        }
    }

    ll hsh[sqr][sqr];

    for (int i = 0; i < sqr; i++) {
        for (int j = 0; j < sqr; j++) {
            hsh[i][j] = 0;
        }
    }
    
    bool flag = true;
    for (int i = 0; i < sqr; i++) {
        if (arr[0][i] != '1') {
            flag = false;
            break;
        }
        hsh[0][i] = 1;
    }

    for (int i = 0; i < sqr; i++) {
        if (arr[sqr - 1][i] != '1') {
            flag = false;
            break;
        }
        hsh[sqr - 1][i] = 1;
    }

 

    for (int i = 0; i < sqr; i++) {
        if (arr[i][0] != '1') {
            flag = false;
            break;
        }
        hsh[i][0] = 1;
    }

   

    for (int i = 0; i < sqr; i++) {
        if (arr[i][sqr - 1] != '1') {
            flag = false;
            break;
        }
        hsh[i][sqr - 1] = 1;
    }

    // for (int i = 0; i < sqr; i++) {
    //     for (int j = 0; j < sqr; j++) {
    //        cout << hsh[i][j] << " ";
    //     }
    //     cout << nl;
    // }
    // cout << nl;


    // for (int i = 0; i < sqr; i++) {
    //     for (int j = 0; j < sqr; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << nl;
    // } 


    if (flag == false) {
        NO;
        return;
    }

    for (int i = 0; i < sqr; i++) {
        for (int j = 0; j < sqr; j++) {
            if (hsh[i][j] == 0 && arr[i][j] != '0') {
                flag = false;
                break;
            }
        }
    }

    if (flag) YES;
    else NO;
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
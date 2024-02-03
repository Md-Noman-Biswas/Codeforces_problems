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

    ll index = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == n){
            index = i;
            break;
        }
    }

    if(n == 1){
        cout << arr[0] << nl;
        return;
    }

    if(index != 0){
        ll l = index - 1;
        ll r = index - 1;
        vector<vector<ll>> possibility;
        while(l >= 0){
            vector<ll> temp;
            for(int i = r; i >= l; i--){
                temp.push_back(arr[i]);
            }
            for(int i = 0; i < l; i++){
                temp.push_back(arr[i]);
            }
            possibility.push_back(temp);
            l--;
        }
        sort(possibility.rbegin(), possibility.rend());
        vector<ll> opt1;
        for(int i = index; i < n; i++){
            opt1.push_back(arr[i]);
        }
        for(auto it: possibility[0]){
            opt1.push_back(it);
        }

        vector<ll> opt2;
        if(index == n - 1){
            opt2.push_back(arr[n - 1]);
            for(int i = 0; i < n - 1; i++){
                opt2.push_back(arr[i]);
            }
        }

        if(opt2 > opt1){
            for(auto it: opt2){
                cout << it << " ";
            }
            cout << nl;
        }else{
            for(auto it: opt1){
                cout << it << " ";
            }
            cout << nl;
        }
    }else{
        for(int i = 0; i < n; i++){
            if(arr[i] == n - 1){
                index = i;
                break;
            }
        }
        ll l = index - 1;
        ll r = index - 1;
        vector<vector<ll>> possibility;
        while(l >= 0){
            vector<ll> temp;
            for(int i = r; i >= l; i--){
                temp.push_back(arr[i]);
            }
            for(int i = 0; i < l; i++){
                temp.push_back(arr[i]);
            }
            possibility.push_back(temp);
            l--;
        }
        sort(possibility.rbegin(), possibility.rend());
        vector<ll> opt1;
        for(int i = index; i < n; i++){
            opt1.push_back(arr[i]);
        }
        for(auto it: possibility[0]){
            opt1.push_back(it);
        }

        vector<ll> opt2;
        if(index == n - 1){
            opt2.push_back(arr[n - 1]);
            for(int i = 0; i < n - 1; i++){
                opt2.push_back(arr[i]);
            }
        }

        if(opt2 > opt1){
            for(auto it: opt2){
                cout << it << " ";
            }
            cout << nl;
        }else{
            for(auto it: opt1){
                cout << it << " ";
            }
            cout << nl;
        }
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
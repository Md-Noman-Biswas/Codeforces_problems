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
    vector<ll> arr(2*n);
    vector<ll> even;
    vector<ll> odd;

    for(int i=0; i<2*n; i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0){
            even.pb(i + 1);
        } else {
            odd.pb(i + 1);
        }
    }   

    if(even.size() % 2 == 0 && odd.empty()){
        for(int i = 0; i < even.size() - 2; i += 2){
            cout << even[i] << " " << even[i + 1] << nl;
        }
        return;
    }
    if(odd.size() % 2 == 0 && even.empty()){
        for(int i = 0; i < odd.size() - 2; i += 2){
            cout << odd[i] << " " << odd[i + 1] << nl;
        }
        return;
    }

    bool flag = false;
    if(even.size() % 2 != 0){
        flag = true;
        even.pop_back();
    }
    if(odd.size() % 2 != 0){
        flag = true;
        odd.pop_back();
    }
    
    if(!flag){
        if(!even.empty()){
            for(int i = 0; i < even.size() - 2; i += 2){
                cout << even[i] << " " << even[i + 1] << nl;
            }
        }
        if(!odd.empty()){
            for(int i = 0; i < odd.size() - 1; i += 2){
                cout << odd[i] << " " << odd[i + 1] << nl;
            }
        }
        return;
    }

    if(!even.empty()){
            for(int i = 0; i < even.size() - 1; i += 2){
                cout << even[i] << " " << even[i + 1] << nl;
        }
    }

    if(!odd.empty()){
                for(int i = 0; i < odd.size() - 1; i += 2){
        cout << odd[i] << " " << odd[i + 1] << nl;
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
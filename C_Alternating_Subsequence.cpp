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
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }   

    vector<ll> neg;
    vector<ll> pos;
    ll prevNeg, prevPos;
    bool consecNeg, consecPos;
    if(arr[0] < 0){
        neg.pb(arr[0]);
        prevNeg = arr[0];
        consecNeg = true;
        consecPos = false;
    }
    if(arr[0] > 0){
        pos.pb(arr[0]);
        prevPos = arr[0];
        consecPos = true;
        consecNeg = false;
    }
    for(int i=1; i<n; i++){
        if(arr[i] > 0 && consecPos == true){
            if(arr[i] > prevPos){
                pos.pop_back();
                pos.pb(arr[i]);
                consecPos = true;
                consecNeg = false;
                prevPos = arr[i];
            }
        }
        if(arr[i] < 0 && consecNeg == true){
            if(arr[i] > prevNeg){
                neg.pop_back();
                neg.pb(arr[i]);
                consecNeg = true;
                consecPos = false;
                prevNeg = arr[i];
            }
        }
        if(arr[i] > 0 && consecNeg == true){
            pos.pb(arr[i]);
            consecPos = true;
            consecNeg = false;
            prevPos = arr[i];
        }
        if(arr[i] < 0 && consecPos == true){
            neg.pb(arr[i]);
            consecNeg = true;
            consecPos = false;
            prevNeg = arr[i];
        }
    }
    ll sum = 0;
    for(auto it: pos){
        //cout << it << nl;
        sum += it;
    }
    for(auto it: neg){
        //cout << it << nl;
        sum += it;
    }
    cout << sum << nl;
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
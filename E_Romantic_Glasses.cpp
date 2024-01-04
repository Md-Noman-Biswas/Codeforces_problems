#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(i % 2 == 0) arr[i] *= -1;
    }

    set<ll> st;
    st.insert(0);
    ll sum = 0;
    bool flag = false;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(st.find(sum) != st.end()){
            flag = true;
            break;
        }
        st.insert(sum);
    }
    if(flag) YES;
    else NO;
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
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
    vector<ll> arr(n + 1);
    set<ll> st;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        st.insert(arr[i]);
    }
    if(st.size() == 1){
        cout << 0 << nl;
        return;
    }
    if(st.size() == n){
        cout << n - 1 << nl;
        return;
    }

    ll l = 1;
    ll r = n;
    ll i = 1;
    while(arr[i] == arr[i + 1]){
        l++;
        i++;
    }   
    
    ll j = n;
    while(arr[j] == arr[j - 1]){
        r--;
        j--;
    }

    //cout << l << " " << r << nl;

    ll ans = 0;
    if(arr[l] == arr[r]){
        ans = r - l - 1;
    }
    else if(r - l == 1){
        ll right_value = n - r + 1;
        ll left_value = l;
        cout << min(left_value, right_value) << nl;
        return;
    }
    else if(arr[l] != arr[r]){
        ll temp1 = r - l + (n - r);
        ll temp2 = r - l + (l - 1);
        //cout << temp1 << " " << temp2 << nl;
        ans = min(temp1, temp2);
    }
    cout << ans << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
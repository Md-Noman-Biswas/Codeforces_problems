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
    for(int i=0; i<n; i++) cin >> arr[i];
    
    stack<ll> st;
    ll fifty = 0;
    ll five = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 25){
            st.push(25);
            five++;
        }
        else if(arr[i] == 50){
            if((st.size() - fifty) < 1){
                cout << "NO" << nl;
                return;
            }else{
                st.pop();
                five--;
                fifty++;
                st.push(50);
            }
        }
        else if(arr[i] == 100){
            if((st.size() < 3 && fifty == 0) || (st.size() == 1 && fifty > 0) || (st.size() >= 2 and five == 0)){
                cout << "NO" << nl;
                return;
            }
            else if(st.size() >= 2 and fifty > 0){
                fifty--;
                st.pop();
                st.pop();
                five--; 
            }
            else{
                st.pop();
                st.pop();
                st.pop();
                five -= 3;
            }
        }
    }
    cout << "YES" << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
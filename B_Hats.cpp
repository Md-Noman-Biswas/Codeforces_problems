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
    vector<bool> happy(n + 1, 0);
    vector<ll> arr(n + 1);
    stack<ll> st;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            happy[i + 1] = true; 
        }
    }
    //cout << happy[5] << nl;

    for(int i = n; i > 0; i--){
        st.push(arr[i]);
    }

    bool flag = true;
    for(int i = 0; i < s.size(); i++){
        // cout << s[i] << nl;
        // cout << happy[st.top()] << nl;
        // cout << nl;
        if(s[i] == '0'){
            if(!st.empty()){
                //cout << happy[st.top()] << nl;
                if(happy[st.top()] == false && st.top() != (i + 1)){ 
                    if(!st.empty()){
                        st.pop();
                    }
                }else{
                    continue;
                }
            }
        }else{
            if(st.empty()){
                flag = false;
                break;
            }
            //cout << st.top() << nl;
            if(st.top() != i + 1){ 
                    flag = false;
                    break;
            }
            st.pop(); 
        }
    }

    if(flag) YES;
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
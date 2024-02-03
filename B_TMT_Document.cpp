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
    string s;
    cin >> s;
    map<ll, ll> mp;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }   
    if((mp['T'] != (2 * mp['M'])) || s.back() != 'T'){
        NO;
    }else{
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'T'){
                st.push(s[i]);
            }else{
                if(st.empty()){
                    NO;
                    return;
                }else{
                    st.pop();
                }
            }
        }

        reverse(s.begin(), s.end());
        
        stack<char> xd;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'T'){
                xd.push(s[i]);
            }else{
                if(xd.empty()){
                    NO;
                    return;
                }else{
                    xd.pop();
                }
            }
        }

        YES;
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
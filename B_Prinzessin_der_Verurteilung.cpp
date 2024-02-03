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
set<string> dx;
void generate(){
    for(int i = 'a'; i <= 'z'; i++){
        string s;
        s.push_back(i);
        for(int j = 'a'; j <= 'z'; j++){
            s.push_back(j);
            dx.insert(s);
            s.pop_back();
        }

    }
}

void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    set<char> st;
    for(int i = 0; i < s.size(); i++){
        st.insert(s[i]);
    }
    char ans = - 1;
    for(int i = 'a'; i <= 'z'; i++){
        if(st.find(i) == st.end()){
            ans = i;
            break;
        }
    } 
    vector<string> ss;
    bool flag = false;
    bool flag2 = false;
    if(ans != -1){
        cout << ans << nl;
        return;
    }

    if(ans = -1){
        for(int i = 'a'; i <= 'z'; i++){
            string temp;
            temp.push_back(i);
            for(int j = 'a'; j <= 'z'; j++){
                temp.push_back(j);
                if(s.find(temp) != string::npos){
                    temp.pop_back();
                    continue;
                }
                flag = true;
                break;
            }
            if(flag){
                ss.push_back(temp);
                break;
            }
        }
    } 
    if(ss.size() != 0){
        for(auto it: ss){
            cout << it;
        }   
        cout << nl;
    }else{
        for(auto it = dx.begin(); it != dx.end(); it++){
            string temp = *it;
            for(int i = 'a'; i <= 'z'; i++){
                temp.push_back(i);
                if(s.find(temp) != string::npos){
                    temp.pop_back();
                    continue;
                }
                flag2 = true;
                break;
            }
            if(flag2){
                ss.push_back(temp);
                break;
            }
        }
        for(auto it: ss){
            cout << it;
        }
        cout << nl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    generate();
    while(t--) {
        solve();
    }
    return 0;
}
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

string ss = "";
void num_to_str(int num){
    if(num)
    {
        num_to_str((num-1)/26);
        ss += ('A'+ (num-1)%26);
    }
}
ll ans=0;
void str_to_num(string s){
    for(int i=0;i<s.size();i++)
    {
        ans = ans*26 + s[i]-'A'+1;
    }
}

void solve(){
    string s;
    cin >> s;
    string ch;
    string num;
    vector<string> v;
    vector<string> v2;
    bool consec_char = true;
    bool flag = false;

    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'A'&&s[i] <= 'Z'){
            string s1;
            while(s[i] >= 'A' && s[i] <= 'Z'){
                s1 += s[i];
                i++;
            }
            v.push_back(s1);
        }else{
            string s1;
            while(s[i] >= '0'&&s[i] <= '9'){
                s1 += s[i];
                i++;
            }
            v2.push_back(s1);
        }
        i--;
    }

    if(v.size() > 1 && v2.size() > 1){
        string ans1,ans2;
        ans1 = v2[0];
        ans2 = v2[1];
        ll x = stoi(ans2);
        num_to_str(x);
        cout << ss << ans1 << endl;
    }else{
        string ans1,ans2;
        ans1 = v[0];
        ans2 = v2[0];
        str_to_num(ans1);
        cout<< 'R' << ans2 << 'C' << ans << endl;
    }
    ans = 0;
    ss = "";
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
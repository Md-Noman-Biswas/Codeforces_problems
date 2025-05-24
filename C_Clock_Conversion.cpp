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
const int INF = 1e9 + 10;

void solve(){
    string s; 
    cin >> s;
    string hour_str = s.substr(0, 2);
    string minute_str = s.substr(3, 2);
    int hour = stoi(hour_str);
    int minute = stoi(minute_str);
    string period = "AM";
    if(hour >= 12){
        period = "PM";
        if (hour > 12){
            hour -= 12;
        }
    }
    if(hour == 0){
        hour = 12;
    }

    string result = "";
    if(hour < 10){
        result += "0" + to_string(hour);
    }else{
        result += to_string(hour);
    }
    result += ":";
    if(minute < 10){
        result += "0" + to_string(minute);
    }else{
        result += to_string(minute);
    }
    result += " " + period;

    cout << result << nl;

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
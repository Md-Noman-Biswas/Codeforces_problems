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
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    char arr[5] = {'h','e','l','l','o'};
    char c = arr[0];
    bool h_b = false;
    bool e_b = false;
    bool l_b = false;
    bool o_b = false;
    int cnt = 0;
    int j = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == arr[j]){
            if(arr[j] == 'h'){
                h_b = true;
            }
            if(arr[j] == 'e'){
                e_b = true;
            }
            if(arr[j] == 'l'){
                l_b = true;
            }
            if(arr[j] == 'o'){
                o_b = true;
            }
            j++;
            if(s[i] == 'l'){
                cnt++;
            }
        }
    }
    if(h_b and e_b and l_b and l_b and o_b){
        YES;
    }else{
        NO;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
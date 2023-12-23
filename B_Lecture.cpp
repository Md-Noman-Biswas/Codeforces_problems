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
    ll n, m;
    cin >> n >> m;
    map<string, string> mp;
    for(int i=0; i<m; i++){
        string s1, s2;
        cin >> s1 >> s2;
        if(s1.size() > s2.size()){
            mp[s1] = s2;
            mp[s2] = s2;
        }else{
            mp[s2] = s1;
            mp[s1] = s1;
        }
    }
    cin.ignore();
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    vector<string> words;

    while(ss >> word){
        words.push_back(word);
    }
    for(auto it: words){
        cout << mp[it] << " ";
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
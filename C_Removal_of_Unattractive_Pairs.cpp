#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

bool cmp(pair<char, int> a, pair<char, int> b){
    return a.second > b.second;
}

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    int maxC = -1;
    for(int i=0; i<n; i++){
        mp[s[i]]++;
        maxC = max(mp[s[i]], maxC);
    }
    
    if(maxC > n/2){
        int temp = n - maxC;
        int temp2 = maxC - temp;
        cout << temp2 << nl;
    }else{
        cout << n%2 << nl;
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
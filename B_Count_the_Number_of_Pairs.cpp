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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> big(26, 0);
    vector<int> small(26, 0);
    
    for(int i=0; i<n; i++){
        if((int)s[i] <= 90){
            big[s[i] - 'A']++;
        }else{
            small[s[i] - 'a']++;
        }
    }

    int temp = 0;

    for(int i=0; i<26; i++){
        if(big[i] >= small[i]){
            temp += small[i];
            big[i] -= small[i];
            small[i] -= small[i];
        }else{
            temp += big[i];
            small[i] -= big[i];
            big[i] -= big[i];
        }
    }

    for(int i=0; i<26; i++){
        if(k <= 0) break;
        int temp2 = max(big[i], small[i]);
        if(temp2 > 0) temp += min(temp2/2, k);
        k -= min(temp2/2, k);
    }

    cout << temp << nl;
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
#include<iostream>
#include<vector>

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
    ll n, k;
    cin >> n >> k;
    string s1;
    char ch;
    cin >> s1;

    vector<bool> arr(27, 0);

    for(int i = 0; i < k; i++){
        cin >> ch; 
        arr[ch - 'a'] = true;
    }

    ll ans = 0;
    ll consec = 0;
    for(int i = 0; i < s1.size(); i++){
        ll ind = s1[i] - 'a';
        if(arr[ind]){
            consec++;
        }else{
            ans += (consec * (consec + 1) / 2);
            //cout << ans << nl;
            consec = 0;
        }
    }
    if(consec != 0) ans += (consec * (consec + 1) / 2);
       cout << ans << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
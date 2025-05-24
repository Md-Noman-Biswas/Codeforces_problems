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



bool check(int mid, vector<ll> &arr, vector<ll> &bits){
    fill(bits.begin(), bits.end(), 0);
    for(int j = 0; j < mid; j++){
        for(int i = 0; i <= 20; i++){
            if((arr[j] & (1<<i)) != 0){//1000
                bits[i]++;
            }
        }   
    }
    vector<ll> hsh(bits.begin(), bits.end());
    for(int j = mid; j < arr.size(); j++){
        for(int i = 0; i <= 20; i++){
            if((arr[j] & (1<<i)) != 0){//1000
                hsh[i]++;
            }
        }  
        for(int i = 0; i <= 20; i++){
            if((arr[j - mid] & (1<<i)) != 0){//1000
                hsh[i]--;
            }
        } 
        for(int i = 0; i <= 20; i++){
            if(bits[i] == 0 && hsh[i] != 0) return false;
            if(bits[i] != 0 && hsh[i] == 0) return false;
        }
    }
    return true;
}



void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll total = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<ll> bits(21, 0);
    int l = 1; int r = n;
    int ans = 0;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(check(mid, arr, bits)){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    cout << ans << nl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

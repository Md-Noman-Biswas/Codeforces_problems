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

ll n, d;
vector<ll> arr(N);

bool predicate(double mid){
    double avg;
    for(int i=0; i<n-1; i++){
        avg = (arr[i+1] - arr[i])/2.0;
        if(avg > mid) return false;
    }
    return true;
}

void solve(){
    cin >> n >> d;
    bool zero = false;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] == 0) zero = true;
    }
    sort(arr.begin(), arr.begin() + n);

    double l = 0;
    double r = d;
    double ans = 0;
    ll iter = 100;
    while(r - l > 1e-10 && iter--){
        double mid = (r+l)/2;
        if(predicate(mid)){
            ans = mid;
            r = mid;
        }else{
            l = mid;
        }
    }

    double z = d - arr[n-1];
    double x = arr[0] - 0;
    double temp = max(x, z);
    ans = max(ans, temp);

    cout << fixed << setprecision(10) << ans << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
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

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bool flag = false;
    bool final_flag = false;

    for(int i = 0; i < n - 1; i++){
        ll first_part = 0;
        for(int j = 0; j <= i; j++){
            first_part ^= arr[j];
        }
        flag = false;
        ll  second_part = 0;
        for(int k = i + 1; k < n; k++){
            second_part ^= arr[k];
            if(second_part == first_part){
                flag = true;
                second_part = 0;
            }
        }
        if(flag == true && second_part == 0){
            final_flag = true;
            break;
        }
    }

    if(final_flag){
        YES;
    }else{
        NO;
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
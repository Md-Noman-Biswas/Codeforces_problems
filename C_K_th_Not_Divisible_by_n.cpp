#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int f(int k, int x,int mid){
    int messeges = 0;
    if(mid <= k) {
        messeges = mid*(mid+1)/2;
    }
    else{
        messeges = k*(k+1)/2;
        messeges += k*(k-1)/2 - (mid-k)*(mid-k+1)/2;
    }
    return messeges >= x;

}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int t; cin >> t;
    // cout << "Hola" << endl;
    while(t--){
        int k, x; cin >> k >> x;
        // int lo = 1, hi = 2*k - 1, ans = 2*k - 1, mid;
        // while(hi - lo > 1){
        //     mid = lo + (hi-lo)/2;
        //     if(f(k, x, mid)){
        //         hi = mid;
        //     }
        //     else{
        //         lo = mid+1;
        //     }
        // }
        // cout << lo << " " << hi << endl;
        // if(f(k, x, lo)) ans = lo;
        // else if(f(k, x, hi)) ans = hi;

        int l = 1, r = 2 * k - 1, ans = 2 * k - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (f(k, x, mid)) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        cout << ans << endl;

    }
    return 0;
}
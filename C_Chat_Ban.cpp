#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int f(int k, int x, int mid){
    int messeges = 0;
    if(mid > k) {
        int diff = mid - k;
        int val = k - diff;
        messeges = (k*k - (val*(val+1))/2);
    }
    else{
        messeges = (mid*(mid-1))/2;
    }
    return messeges < x;

}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    // cout << "Hola" << endl;
    while(t--){
        int k, x; cin >> k >> x;
        int l = 1, r = 2 * k - 1, ans = 0;
        while (l <= r) {
            int mid = (l + r)/ 2;
            if (f(k, x, mid)) {
                ans = mid;
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
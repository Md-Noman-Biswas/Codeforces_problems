#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e6+10;

vector<int> hash_array(N);
vector<int> v[10]; 

int digit_multiply(int n) {
    int temp = 1;
    while (n) {
        int x = n % 10;
        if (x != 0) {
            temp *= x;
        }
        n = n / 10;
    }
    return temp;
}

void hsh() {
    for (int i = 1; i <= N; i++) {
        if (i < 10) hash_array[i] = i;
        else {
            int ans = i;
            while (ans > 9) {
                ans = digit_multiply(ans);
            }
            hash_array[i] = ans;
        }
        v[hash_array[i]].push_back(i);
    }
}


void solve() {
    int l, r, k;
    cin >> l >> r >> k;
    int cnt = upper_bound(v[k].begin(), v[k].end(), r) - lower_bound(v[k].begin(), v[k].end(), l);
    cout << cnt << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    hsh();
    while (t--) {
        solve();
    }
    return 0;
}

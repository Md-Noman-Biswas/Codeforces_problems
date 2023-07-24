#include<bits/stdc++.h>
#define int long long
using namespace std;
int status[1000001];
void siv() {
    int n = 1000000;
    status[1] = 1;
    for(int i = 2; i <= n; i++) {
        if(status[i]) continue;
        status[i] = i;
        for(int j = i * i; j <= n; j += i) {
            if(status[j]) continue;
            status[j] = i;
        }
    }
}
vector<pair<int, int>> pf;
void prime_factorize(int n) {
    int cnt = 0;
    int prev = -1;
    while(n > 1) {
        if(status[n] != prev) {
            if(prev != -1)
                pf.push_back({prev, cnt});
            prev = status[n];
            cnt = 0;
        }
        n /= status[n];
        cnt++;
    }
    if(prev != -1) pf.push_back({prev, cnt});
}
vector<int> divs[1000001];
void find_div(int mul, int pos, int n) {
    if(pos == (int)pf.size()) {
        divs[n].push_back(mul);
        return;
    }
    find_div(mul, pos + 1, n);
    for(int i = 0; i < pf[pos].second; i++) {
        mul *= pf[pos].first;
        find_div(mul, pos + 1, n);
    }
}

void create_divs(int curr) {
    prime_factorize(curr);
    find_div(1, 0, curr);
    sort(divs[curr].begin(), divs[curr].end());
    pf.clear();
}
    signed main(){
        siv();
        create_divs(50000);
        for(auto x: divs[50000]){
            cout << x << "\n";
        }
    }
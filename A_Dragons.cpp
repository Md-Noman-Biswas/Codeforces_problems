#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

bool cmp(pair<int, int> p1, pair<int, int> p2){
    if(p1.first == p2.first) return p1.second > p2.second;
    else return p1.first < p2.first;
}
void solve(){
    ll st, n;
    cin >> st >> n;
    bool flag = true;
    vector<pair<int, int>> s_b;
    for(int i=0; i<n; i++){
        ll s, b;
        cin >> s >> b;
        s_b.push_back({s,b});
    }
    sort(s_b.begin(), s_b.end(), cmp);
    for(auto it: s_b){
        //cout << st << nl;
        //cout << flag << nl;
        if(it.first >= st){
            flag = false;
            break;
        }else{
            flag = true;
            st += it.second;
        }
    }
    if(flag) YES;
    else NO;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
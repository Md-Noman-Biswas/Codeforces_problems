#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

bool cmp(pair<int, int> p1, pair<int, int> p2){
    return p1.first > p2.first;
}

void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>> left;
    vector<pair<int, int>> right;
    while(n--){
        int x, y;
        cin >> x;
        if(x >= 0){
            cin >> y;
            right.push_back(make_pair(x, y));
        }else{
            cin >> y;
            left.push_back(make_pair(x,y));
        }
    }

    sort(left.begin(), left.end(), cmp);
    sort(right.begin(), right.end());
    
    ll sum = 0;
    int szR = right.size();
    int szL = left.size();
    int cnt1 = 0;
    if(szL > szR){
        for(int i=0; i<szR; i++){
            sum += right[i].second;
            sum += left[i].second;
        }
        sum += left[szR].second;
    }
    else if(szL == szR){
        for(int i=0; i<szR; i++){
            sum += right[i].second;
            sum += left[i].second;
        }
    }
    else if(szR > szL){
        for(int i=0; i<szL; i++){
            sum += right[i].second;
            sum += left[i].second;
        }
        sum += right[szL].second;
    }
    cout << sum << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
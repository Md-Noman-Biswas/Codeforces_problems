#include<bits/stdc++.h>
using namespace std;
#define ll long long
int maxxx = 100000000;
void solve(){
    ll n;
    cin >> n;
    int skl1, skl2, skl;
    skl1 = skl2 = skl = maxxx;
    while(n--){
        int books;
        cin >> books;
        string skills;
        cin >> skills;
        if(skills == "01"){
            skl1 = min(books,skl1);
        }
        else if(skills == "10"){
            skl2 = min(books,skl2);
        }
        else if(skills == "11"){
            skl = min(books, skl);
        }
    }
    int ans;
    if(skl1 == maxxx || skl2 == maxxx){
        ans = min(skl,maxxx);
    }else{
        ans = min((skl1+skl2), skl);
    }
    if(ans == maxxx){
        cout << -1 << "\n";
    }else{
        cout << ans << "\n";
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
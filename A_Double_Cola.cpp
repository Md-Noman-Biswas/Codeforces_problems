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
    string q;
    q.push_back('s');
    q.push_back('l');
    q.push_back('p');
    q.push_back('r');
    q.push_back('h');

    ll a = 1;
    while(5*ceil(pow(2, a)) < n){
        a++;
    }

    
    char ans;
    if(ans == 's'){
        cout << "Sheldon" << nl;
    }
    else if(ans == 'l'){
        cout << "Leonard" << nl;
    }
    else if(ans == 'p'){
        cout << "Penny" << nl;
    }
    else if(ans == 'r'){
        cout << "Rajesh" << nl;
    }
    else if(ans == 'h'){
        cout << "Howard" << nl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
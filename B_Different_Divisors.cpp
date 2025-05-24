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
const int INF = 1e9 + 10;


vector<bool> isPrime(N, 1);
void sieve(){
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i*i <= N; i++){
        if(isPrime[i] == true){
            for(int j=i*i; j<=N; j+=i){
                isPrime[j] = false;
            }
        }
    }
}

vector<ll> primes;
void prime(){
    for(int i = 3; i <= 1e5; i++){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }
}


void solve(){
    ll d;
    cin >> d;
    ll last = 1;
    int ans = 1;
    ll cnt = 0;
    if(d == 1){
        cout << 6 << nl;
        return;
    }
    for(int i = 0; i < primes.size(); i++){
        if(primes[i] - last >=  d){
            ans *= primes[i];
            last = primes[i];
            cnt++;
        }
        if(cnt == 2) break;
    }
    cout << ans << nl;

}

/* Hey you should check this out
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * do something instead of nothing and stay organized
    * bruteforce to find pattern
    * DON'T GET STUCK ON ONE APPROACH
    * Think the problem backwards
    * In practice time don't see failing test case
*/

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    sieve();
    prime();
    while(t--) {
        solve();
    }
    return 0;
}
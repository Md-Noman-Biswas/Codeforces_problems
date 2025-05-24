#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define db cout << "h"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN
#define mod 1000000007
const int N = 6e6 + 7;
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
vector<ll> pref_prime;
void pre() {
    for (int i = 2; i <= 6e6; i++) {
        if (isPrime[i]) primes.push_back(i);
    }
    pref_prime.resize(primes.size());
    pref_prime[0] = primes[0];
    for (int i = 1; i < primes.size(); i++) {
        pref_prime[i] = pref_prime[i - 1] + primes[i];
    }
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    ll ans = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum >= pref_prime[i]) {
            ans = n - i - 1;
        }
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
    pre();
    while(t--) {
        solve();
    }
    return 0;
}
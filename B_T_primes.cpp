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
const int N = 1e6 + 7;
const int INF = 1e9 + 10;

vector<bool> isPrime(N, 1);
bool isPrimeNumber(int n) {
    if (n < 2) return false; // 0 and 1 are not prime
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false; // If divisible, not prime
    }
    return true; // Prime if no divisors are found
}

bool trail_Division(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        ll isprime = isPrimeNumber(i);
        if (isprime) {
            return false;
        }
    }
    return true;
}

// vector<bool> isPrime(N, 1);
// void sieve(){
//     isPrime[0] = isPrime[1] = false;
//     for(int i = 2; i < N; i++){
//         if(isPrime[i] == true){
//             for(int j=2*i; j<N; j+=i){
//                 isPrime[j] = false;
//             }
//         }
//     }
// }

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=0; i<n; i++){
        ll temp = sqrt(arr[i]);
        if(arr[i] == 1){
            cout << "NO" << nl;
        }
        else if(temp * temp == arr[i] && trail_Division(temp) == true){
            cout << "YES" << nl;
        }else{
            cout << "NO" << nl;
        }
    }     
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
    solve();
    return 0;
}
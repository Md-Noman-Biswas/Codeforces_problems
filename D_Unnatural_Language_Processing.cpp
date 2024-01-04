#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<lld> vd;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector<vll> vvll;
typedef vector<pll> vpl;
typedef vector<vpl> vvpl;
typedef vector<pll> vpll;
 
#define nl <<"n"
#define pi acos(-1)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
#define rall(x) x.rbegin(), x.rend()
#define mem(a,b) memset(a,b,sizeof(a))
#define UNIQUE(a) (a).erase(unique(all(a)),(a).end())
#define lb lower_bound
#define ub upper_bound
#define F first
#define S second
#define YES cout<<"YESn"
#define NO cout<<"NOn"
#define Case(t) cout<<"Case "<<t<<": "
 
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
 
        string a;
        cin >> a;
 
        string b;
 
        for(ll i=0; i<(n-2); i++)
        {
            b.push_back(a[i]);
            if(a[i]=='a' || a[i]=='e')
            {
                if(((a[i+1]!='a')&&(a[i+1]!='e')) && ((a[i+2]!='a')&&(a[i+2]!='e')))
                {
                    b.push_back(a[i+1]);
                    i++;
                    b.push_back('.');
                }
                else
                {
                    b.push_back('.');
                }
 
            }
        }
 
    b.push_back(a[n-2]);
    b.push_back(a[n-1]);
 
    cout << b << "\n";
}
return 0;
}
 
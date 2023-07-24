#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
        ll n;
        cin >> n;
        ll sum = 0;
        vector<ll> arr(n);
        for(ll i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr.begin(), arr.end());
        if(sum % 2 == 0)
            cout << sum << endl;
        else
        {
            for(ll i=0; i<n; i++)
            {
                if((sum - arr[i]) % 2 == 0)
                {
                    cout << sum-arr[i] << endl;
                    break;
                }
            }
        }
        return 0;
}
#include<bits/stdc++.h>
using  namespace  std;
#define ll long long
#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    faster
    int t;
    cin>>t;
    while(t--)
    {
       ll n, h;
       cin >> n >> h;
       ll arr[n+2];
       for(int i=0;i<n;i++)cin >> arr[i];
       sort(arr, arr+n);
       
       ll sum = arr[n-1] + arr[n-2];
       
       if(h <= arr[n-1])cout << 1 << endl;
       else if(h <= sum)cout << 2 << endl;
       else{
           if(h%sum == 0) cout << (h/sum)*2 << endl;
           else
           {
               ll ans = (h/sum)*2;
               if(h%sum > arr[n-1]) ans+= 2;
               else ans++;
               cout<<ans<<endl;
           }
       }
    }
}

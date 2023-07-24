#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
int n,d;
        cin>>n>>d;
        int sum=0;
        int x;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
            sum+=x;
        }
        if(sum==d)cout<<"NO"<<"\n";
        else
        {
            cout<<"YES"<<"\n";
            int cnt=0;
            int sum=0;
            while(cnt!=n)
            {
                int ans=v[0];
                v.erase(v.begin());
                if(sum+ans == d)
                {
                    v.push_back(ans);
                }
                else{
                    cout<<ans<<" ";
                    sum+=ans;
                    cnt++;
                }
            }
        cout<<"\n";
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
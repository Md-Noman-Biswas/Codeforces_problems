#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<ll>> subsets;
void subb(vector<ll>& nums) {
    int n = nums.size();
    int subset_ct = (1<<n);
    for(int mask = 0; mask < subset_ct; mask++){
        vector<ll> subset;
        for(int i=0; i<n; i++){
            if((mask & (1<<i)) != 0){
                subset.push_back(nums[i]);
            }
        }
        subsets.push_back(subset);
    }
}
bool flag = false;
ll sum(vector<ll>arr){
    ll ans = 0;
    ll sz = arr.size();
    for(int i=0; i<sz; i++){
        ans += arr[i];
    }
    return ans;
}
void solve(){
    ll n, min, max, diff;
    cin >> n >> min >> max >> diff;
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    subb(arr);
    ll cnt = 0;
    for(int i=1; i<subsets.size(); i++){
        ll sz = subsets[i].size() - 1;
        ll actual_diff = subsets[i][sz] - subsets[i][0];
        ll temp = sum(subsets[i]);
        if(actual_diff >= diff && temp <= max && temp >= min ){
            cnt++;
        }
    }
    cout << cnt << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
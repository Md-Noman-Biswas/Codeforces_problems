#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
const int N = 1e5 + 10;
int arr1[27];
int arr2[27];

void solve(){
    std::string a,b;
    std::getline(std::cin, a);
    std::getline(std::cin, b);
    map<char, int> mp1;
    map<char, int> mp2;
    for(int i=0; i<a.length(); i++){
        if(a[i] != ' '){
            mp1[a[i]]++;
        }
        
    }
    for(int i=0; i<b.length(); i++){
        if(b[i] != ' '){
            mp2[b[i]]++;
        }
    }
    bool flag = true;
    for(auto it2 = mp2.begin(); it2 != mp2.end() ; it2++){
        if(it2->second > mp1[it2->first]){
            flag = false;
        }
    }
    if(flag == false){
        cout << "NO" << "\n";
    }else{
        cout << "YES" << "\n";
    }
 }


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
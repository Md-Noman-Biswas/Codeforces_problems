#include<bits/stdc++.h>
using namespace std;
void solve(){
    char str[100];
    cin >> str;
    int n = strlen(str);
    sort(str,str + n);
    int count = 0;
    //cout << str;
    for(int i=0; i<n; i++){
        if(str[i] != str[i+1]){
            count++;
        }
    }
    //cout << count << "\n";
    if(count%2 == 0){
        cout << "CHAT WITH HER!" << "\n";
    }
    else{
        cout << "IGNORE HIM!" << "\n";
    }
}
int main(){
    solve();
}
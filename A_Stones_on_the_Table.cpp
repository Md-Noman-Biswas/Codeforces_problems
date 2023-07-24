#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    char s[n];
    cin >> s;
    int count = 0;
    for(int i=0; i<strlen(s); i++){
        if(s[i] == s[i+1]){
            count++;
        }
    }
    cout << count << "\n";
}
int main(){
    solve();
}
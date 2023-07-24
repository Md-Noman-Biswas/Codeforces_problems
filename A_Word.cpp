#include<bits/stdc++.h>
using namespace std;
void solve(){
    string n;
    cin >> n;
    char ch1,ch2,ch3;
    int u=0, l=0;
    for(int i=0; i<n.size(); i++){
        if((int)n[i] >= 65 && (int)n[i] <= 90){
            u++;
        }
        if((int)n[i] >= 97 && (int)n[i] <= 122){
            l++;
        }
    }
    for(int i=0; i<n.size(); i++){
        if(l>u){
            ch1 = tolower(n[i]);
            cout << ch1;
        }
        else if(l==u){
            ch3 = tolower(n[i]);
            cout << ch3;
        }
        else{
                ch2 = toupper(n[i]);
                cout << ch2;
            }
        }
    }
int main(){
    solve();
}
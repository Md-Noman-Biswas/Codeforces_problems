#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    int anton = 0, danik = 0;
    cin >> n;
    char arr[n];
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
    if((int)arr[i] == 'A'){
        anton++;
    }
    if((int)arr[i] == 'D'){
        danik++;
    }
    }
    if(anton>danik){
        cout << "Anton" << "\n";
    }
    else if(anton < danik){
        cout << "Danik" << "\n";
    }
    else{
        cout << "Friendship" << "\n";
    }
}
int main(){
    solve();
}
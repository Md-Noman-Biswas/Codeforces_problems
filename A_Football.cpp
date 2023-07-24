#include<bits/stdc++.h>
using namespace std;
// int solve(){
//     // string n;
//     // cin >> n;
//     // int count = 0;
//     // for(int i=0; i<n.size(); i++){
//     //     if(n[i] == n[i+1]){
//     //         //continue;
//     //         count++;
//     //         if(count >= 7){
//     //             cout << "YES" << "\n";
//     //             return 0;
//     //         }
//     //     }
//     //     else cout << "NO" << "\n";
//     //     return 0;
//     // }
// }
int main(){
    string n;
    cin >> n;
    int count = 1;
    for(int i=0; i<n.size(); i++){
        if(n[i] == n[i+1]){
            //continue;
            count++;
            //cout << count << "\n";
            if(count >= 7){
                cout << "YES" << "\n";
                return 0;
            }
        }
        else count = 1;
        
    }
    cout << "NO" << "\n";
}
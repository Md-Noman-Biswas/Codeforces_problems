#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

// void solve(){
//     // string s1;
//     // cin >> s1;
//     // string s2;
//     // cin >> s2;
//     // string s3;
//     // cin >> s3;
//     // int point1 = 1;
//     // int total = 0;
//     // for(int i=0; i<10; i++){
//     //     if(s1[i] == 'X'){
//     //         total += point1;
//     //     }
//     // }
//     // int point2 = 2;
//     // if(s2[0] == 'X'){
//     //     total += point1;
//     // }
//     // if(s2[9] == 'X'){
//     //     total += point1;
//     // }
//     // for(int i=1; i<9; i++){
//     //     if(s2[i] == 'X'){
//     //         total += point2;
//     //     }
//     // }
//     // int point3 = 3;
//     // for(int i=2; i<8; i++){
//     //     if(s3[i] == 'X'){
//     //         total += point3;
//     //     }
//     // }
//     // if(s3[0] == 'X') total += point1;
//     // if(s3[1] == 'X') total += point2;
//     // if(s3[8] == 'X') total += point2;
//     // if(s3[9] == 'X') total += point1;
//     // string s4;
//     // cin >> s4;
//     // int point4 = 4;
//     // for(int i=3; i<7; i++){
//     //     if(s4[i] == 'X'){
//     //         total += point4;
//     //     }
//     // }
//     // if(s4[0] == 'X') total += point1;
//     // if(s4[1] == 'X') total += point2;
//     // if(s4[2] == 'X') total += point3;
//     // if(s4[7] == 'X') total += point3;
//     // if(s4[8] == 'X') total += point2;
//     // if(s4[9] == 'X') total += point1;
//     // string s5;
//     // cin >> s5;
//     // int point5 = 5;
//     // for(int i=4; i<6; i++){
//     //     if(s5[i] == 'X'){
//     //         total += point5;
//     //     }
//     // }
//     // if(s5[0] == 'X') total += point1;
//     // if(s5[1] == 'X') total += point2;
//     // if(s5[2] == 'X') total += point3;
//     // if(s5[3] == 'X') total += point4;
//     // if(s5[6] == 'X') total += point4;
//     // if(s5[7] == 'X') total += point3;
//     // if(s5[8] == 'X') total += point2;
//     // if(s5[9] == 'X') total += point1;

//     // string s6;
//     // cin >> s6;
//     // for(int i=4; i<6; i++){
//     //     if(s6[i] == 'X'){
//     //         total += point5;
//     //     }
//     // }
//     // if(s6[0] == 'X') total += point1;
//     // if(s6[1] == 'X') total += point2;
//     // if(s6[2] == 'X') total += point3;
//     // if(s6[3] == 'X') total += point4;
//     // if(s6[6] == 'X') total += point4;
//     // if(s6[7] == 'X') total += point3;
//     // if(s6[8] == 'X') total += point2;
//     // if(s6[9] == 'X') total += point1;

//     // string s7;
//     // cin >> s7;
//     // for(int i=3; i<7; i++){
//     //     if(s7[i] == 'X'){
//     //     total += point4;
//     //     }
//     // }
//     // if(s7[0] == 'X') total += point1;
//     // if(s7[1] == 'X') total += point2;
//     // if(s7[2] == 'X') total += point3;
//     // if(s7[7] == 'X') total += point3;
//     // if(s7[8] == 'X') total += point2;
//     // if(s7[9] == 'X') total += point1;

//     // string s8;
//     // cin >> s8;
//     //  for(int i=2; i<8; i++){
//     //     if(s8[i] == 'X'){
//     //         total += point3;
//     //     }
//     // }
//     // if(s8[0] == 'X') total += point1;
//     // if(s8[1] == 'X') total += point2;
//     // if(s8[8] == 'X') total += point2;
//     // if(s8[9] == 'X') total += point1;

//     // string s9;
//     // cin >> s9;
//     // if(s2[0] == 'X'){
//     //     total += point1;
//     // }
//     // if(s2[9] == 'X'){
//     //     total += point1;
//     // }
//     // for(int i=1; i<9; i++){
//     //     if(s2[i] == 'X'){
//     //         total += point2;
//     //     }
//     // }

//     // string s10;
//     // cin >> s10;
//     // for(int i=0; i<10; i++){
//     //     if(s1[i] == 'X'){
//     //         total += point1;
//     //     }
//     // }
//     // cout << total << "\n";

// }



void solve(){
    char arr[10][10];
    int total = 0;
    int point1 = 1, point2 = 2, point3 = 3, point4 = 4, point5 = 5;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(arr[i][j] == 'X'){
                if(i == 0 || i == 9 || j == 0 || j == 9){
                    total += point1;
                }
                else if(i == 1 || i == 8 || j == 1 || j == 8){
                    total += point2;
                }
                else if(i == 2 || i == 7 || j == 2 || j == 7){
                    total += point3;
                }
                else if(i == 3 || i == 6 || j == 3 || j == 6){
                    total += point4;
                }
                else if(i == 4 || i == 5 || j == 4 || j == 5){
                    total += point5;
                }
            }
        }
    }
    cout << total << "\n";
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
#include<iostream>
//#define long long int;
using namespace std;
int main(){
    unsigned long long int a,b,sum = 0;
    cin >> a >> b;
    // unsigned long long int arr[b-a];
    // for(int i=a; i<=b; i++){
    //     if(i%2 != 0){
    //         sum =  sum+i;
    //     }
    // }
    // cout << sum << "\n";
    for(unsigned long long int i=a; i<=b; i++){
        if(i%2 != 0){
            sum = sum+i;
        }
    }
    cout << sum << "\n";
}
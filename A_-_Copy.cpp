#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a == b){
        cout << c << "\n";
    }
    if(b == c){
        cout << a << "\n";
    }
    if(a == c){
        cout << b << "\n";
    }
}
#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,b;
    int result1, result2;
    cin >> a >> b;
    for(int i=0; i<a.size(); i++){
        if(a[i] < 92 ){
            a[i]= a[i] + 32;
        }
        if(b[i] < 92){
            b[i]= b[i] + 32;
        }
    }
        if(a>b){
            cout << "1" << "\n";
        }
        else if(a<b){
            cout << "-1" << "\n";
        }
        else if(a == b){
            cout << "0" << "\n";
        }
    }
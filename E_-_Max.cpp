#include<iostream>
using namespace std;
int main(){
    long long int a,b,c,k,sum = 0;
    
    cin >> a >> b >> c >> k;
    if(k<=a){
        sum = sum + k;
        cout << sum << endl;
    }
    else if( k>a){
        sum = a;
        k=(k-a);
        if(k>b){
            k=k-b;
            if(k>0){
                sum = sum - k;
            }
        }
        cout << sum << "\n";
    }
}
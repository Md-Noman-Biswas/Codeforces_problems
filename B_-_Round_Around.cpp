#include<iostream>
using namespace std;
int main(){
    long long int a, res;
    cin >> a;
   if(a == 5){
    cout << 0 << endl;
   }
   else if(a%10 == 0){
    cout << a << endl;
   }
   else if(a%10 <= 5){
    cout << a-(a%10) << endl;
   }
   else if(a%10 >= 5){
    int t;
    t= 10 - (a%10);
    cout << a+t << endl;
   }
}
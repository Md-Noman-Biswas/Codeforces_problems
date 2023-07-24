#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    int total=0;
    cin >> a >> b >> c;
    int sum =0;
    for(int i=a; i<=b; i++){
        if(c%i == 0)
        total++;
    }
    cout << total << endl;
}
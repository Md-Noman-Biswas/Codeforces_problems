#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    cin >> n >> a >>b;
    int tic1 = n*a;
    int tic2 = b;
    if(tic1>=tic2){
        cout << tic2 << "\n";
    }
    else cout << tic1 << endl;

}
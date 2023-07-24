#include<iostream>
using namespace std;
int main(){
    int h,w;
    while(1){
    cin >> h >> w ;
    for(int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
           if(j<w && j>1 && i!=1 && i!=h){
            cout << ".";
           }
           else cout << "#";
}
    cout << "\n";
}
cout << "\n";
if(h==0 && w == 0) return 0;
}
}
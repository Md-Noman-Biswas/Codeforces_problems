#include<iostream>
using namespace std;
int main(){
    int h=1,w=1;
    while(h != 0 && w != 0){
        cin >> h >> w;
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                cout << "#";
            }
            cout << "\n";
        }
        cout << endl;
    }

}
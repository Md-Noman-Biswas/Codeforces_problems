#include<bits/stdc++.h>
using namespace std;
int main(){
    string w;
    cin >> w;
    if((int)w[0] > 90){
        w[0] = (int)w[0] - 32;
        cout << w;
    }
    else cout << w << endl;
}
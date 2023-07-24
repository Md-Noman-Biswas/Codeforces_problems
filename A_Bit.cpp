#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    int value = 0;
    while(n--){
    string x;
    cin >> x;
    if(x == "++X" || x == "X++"){
        value++;
    }
    if(x == "--X" || x == "X--"){
        value--;
    }
    }
    cout << value << endl;

}
#include<iostream>
using namespace std;
int main(){
    int counter[25] = {0};
    string word;
    cin >> word;
    for(int i=65; i<=90; i++){
        int sum=0;
        for(int j=0; j<word.size(); j++){
            if((int)word[j] == i){
                sum++;
            }
        }
        if(sum>0){
            cout << (char)i << " " << sum << endl;
            }
        
    }
    for(int i=97; i<=122; i++){
        int sum=0;
        for(int j=0; j<word.size(); j++){
            if((int)word[j] == i){
                sum++;
            }
        }
        if(sum>0){
            cout << (char)i << " " << sum << endl;
            }
        
    }
    }
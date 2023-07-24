#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    vector<string> threes;
    int one = 0, two = 0, three = 0;
    cin >> str;
    for(int i=0; i<str.size(); i++){
        if(str[i] == '1'){
            one++;
        }
        if(str[i] == '2'){
            two++;
        }
        if(str[i] == '3'){
            three++;
        }
    }
    string ans;
    for(int i=0; i<one; i++){
        threes.push_back("1");
        threes.push_back("+");
    }
    for(int i=0; i<two; i++){
        threes.push_back("2");
        threes.push_back("+");
    }
    for(int i=0; i<three; i++){
        threes.push_back("3");
        threes.push_back("+");
    }
    threes.erase(threes.end());
    for (string x : threes){
		cout << x;
    }
    cout << "\n";
    
    // sort(str.begin(), str.end()); 
    // int noOfplus = str.size() - 3;
    // cout << noOfplus << "\n";
    // cout << str << endl;
    // int noOfnum = str.size() - noOfplus;
    // cout << noOfnum << endl;
    // cout << str[2];
    // for(int i=2; i<=noOfnum; i++ ){
    //     cout << str[i] << "+" << str[i+1];
    // }
}

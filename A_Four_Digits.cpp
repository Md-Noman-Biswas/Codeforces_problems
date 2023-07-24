#include<bits/stdc++.h>
using namespace std;
void PrintStack(queue<string> s)
{
    if (s.empty())
        return;
    string x = s.front();
    s.pop();
    PrintStack(s);
    cout << x;
    s.push(x);
}
int main(){
    string n;
    cin >> n;
    queue<string> s;
    int sz = n.size();
    s.push(n);
    if(sz == 3){
        s.push("0");
    }
    if(sz == 2){
        s.push("00");
    }
    if(sz == 1){
        s.push("000");
    }
    PrintStack(s);
}
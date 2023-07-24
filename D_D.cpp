#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    int it = 0;
    while(cin >> s && s != "#"){
        it++;
        cout << "Case " << it << ": ";
        if(s == "HELLO") cout << "ENGLISH" << "\n";
        else if(s == "HALLO") cout << "GERMAN" << "\n";
        else if(s == "BONJOUR") cout << "FRENCH" << "\n";
        else if(s == "CIAO") cout << "ITALIAN" << "\n";
        else if(s == "HOLA") cout << "SPANISH" << "\n";
        else if(s == "ZDRAVSTVUJTE") cout << "RUSSIAN" << "\n";
        else cout << "UNKNOWN" << "\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
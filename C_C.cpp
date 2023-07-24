#include<bits/stdc++.h>
using namespace std;
int get_sum(string s){
    int sum = 0; 
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            sum += s[i] - 'a' + 1;
        }
    }
    return sum;
}
int digit_sum(int sum){
    int temp;
    while (sum >= 10){
        temp = 0;
        while (sum){
            temp += sum % 10;
            sum /= 10;
        }
        sum = temp;
    }
    return sum;
}
void solve(){
    string s1, s2;
    int sum1, sum2;
    float final_sum1;
    float final_sum2;
    while(cin >> s1){
        cin >> s2;
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        //cout << s1 << "\n";
        //cout << s2 << "\n";
        sum1 = get_sum(s1);
        sum2 = get_sum(s2);
        final_sum1 = digit_sum(sum1);
        final_sum2 = digit_sum(sum2);
        //cout << final_sum1 << "\n";
        //cout << final_sum2 << "\n";
        if (final_sum1 < final_sum2)
            printf("%.2f %\n", final_sum1 * 100.0 / final_sum2);
        else
            printf("%.2f %\n", final_sum2 * 100.0 / final_sum1);
    }
}
int main(){
    solve();
}
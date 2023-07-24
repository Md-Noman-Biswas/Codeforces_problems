#include<bits/stdc++.h>
using namespace std;
int get_sum(char *it){
    int total = 0, temp;
    while (*it){   
        if (*it >= 'a' && *it <= 'z')
            total += *it - 'a' + 1;
        else if (*it >= 'A' && *it <= 'Z')
            total += *it - 'A' + 1;
        ++it;
    }
    return total;
}
int put_sum(int total){
    int temp;
    while (total >= 10){
        temp = 0;
        while (total){
            temp += total % 10;
            total /= 10;
        }
        total = temp;
    }
    return total;
}
void solve(){
    char str1[30], str2[30];
    int temp1, temp2;
    int first, second;
    while (gets(str1)){
        gets(str2);
        temp1 = get_sum(str1);
        temp2 = get_sum(str2);
        first = put_sum(temp1);
        second = put_sum(temp2);
        if (first < second)
            printf("%.2f %\n", first * 100.0 / second);
        else
            printf("%.2f %\n", second * 100.0 / first);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
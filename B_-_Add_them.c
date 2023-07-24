// #include<iostream>
// #include<string>
//#define long long int;
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int digit[5];
    for(int i=0; i<5 ; i++)
    {
        digit[i]=n%10;
        n = n/10;
    }
    // for(int i=0; i<5; i++){
    //     cout << digit[i] << endl;
    // } 
    int sum=0;
    for(int i=0; i<5; i++){
        sum = sum + digit[i];
    } 
    printf("%d",sum);
}

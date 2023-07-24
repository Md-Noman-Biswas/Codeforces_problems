#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int counter[100] = {0};
    for(int i=0; i<n; i++){
        cin >> arr[i];
        for(int j=30; j<=85; j++){
            if(arr[i] == j){
                counter[j]++;
            }
        }
    }
    for(int i=30; i<=85; i++){
        if(counter[i]>1){
            cout << i << " " << counter[i] << endl;
        }
        
    }
}
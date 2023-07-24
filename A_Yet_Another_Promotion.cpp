
#include "iostream"
using namespace std;
#include <string>
#include<math.h>
int main()
{
    int t;
    while(t--){
long long int x,y;
long long int p,q;
cin>>x>>y>>p>>q;
long long int sum=0;
long long int count=0;

int rest=p-1;

 double buy=rest*(double)q/(q+1);

long long int money1=(buy*x)+y;
cout<<money1 << "\n";

   return 0;
}
}
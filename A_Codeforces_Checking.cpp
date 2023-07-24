#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  int i,j,t;
  scanf("%d",&t);
 
while(t--){
  char arr[]={'c','o','d','e','f','o','r','c','e','s','\0' };
     j=strlen(arr);
   char alphabet;

   scanf("%s",&alphabet);
   int count=0;

   for(i=0;i<j;i++){
    if (alphabet == arr[i]){
       count++;
   }
}
if(count>0){
    printf("YES\n");
}else {
  printf("NO\n");
}
}
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int T,i,j;
    char c[101];
    scanf("%d",&T);
    getchar();
    
   for(i=1;i<=T;i++)
    {
        fgets(c,101,stdin);
        int count=0;
        for(j = 0; c[j] != '\0'; j++)
        {
            if(c[j] == ' ')
            {
                count++;
            }
        }
        printf("%d\n",count + 1);
    }    
}
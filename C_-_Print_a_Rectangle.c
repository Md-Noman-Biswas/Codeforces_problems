#include <stdio.h>

int main()
{
    int h=1,w=1,i,j;

    while(h!=0 && w!=0){
        scanf("%d %d",&h,&w);
        for(i=1;i<=h;i++){
            for(j=1;j<=w;j++){
                printf("#");
            }
            printf("\n");
        }
        printf("\n");
    }
}
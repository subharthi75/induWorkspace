#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("I/P:");
    scanf("%d",&a);

    for(int i=a;i>=1;i--){

         for(int k=(a-i); k>=1; k--){
                printf(" ");
            }
        for(int j=i*2-1; j>=1; j--){
                printf("%d",i);

        }
        printf("\n");
    }

    return 0;
}

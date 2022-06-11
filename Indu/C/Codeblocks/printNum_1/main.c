#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;
    printf("I/p:");
    scanf("%d",&a);

    for(int i=1;i<=a;i++){

         for(int k=1; k<=(a-i); k++){
                printf(" ");
            }
        for(int j=1; j<=i*2-1; j++){
                printf("%d",i);

        }
        printf("\n");
    }

    return 0;
}

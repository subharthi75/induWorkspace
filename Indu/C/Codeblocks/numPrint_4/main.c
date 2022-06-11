/*
starsPrint_1
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a;
    printf("Enter line number:");
    scanf("%d",&a);

    for(int i=1;i<=a;i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

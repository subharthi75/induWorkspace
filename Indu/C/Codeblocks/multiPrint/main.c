#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("I/P:");
    scanf("%d",&a);

    int s=1;
    for(int j=1;j<=a;j++){

        for(int i=1;i<=10;i++){
            s=j*i;
            printf("%4d",s);
         }
    printf("\n");
    }
    return 0;
}

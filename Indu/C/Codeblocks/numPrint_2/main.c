#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf("%4d",j);
        }
        printf("\n");
    }
    return 0;
}

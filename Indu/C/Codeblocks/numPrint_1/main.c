#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter line number:");
    scanf("%d",&a);
    printf("number to print: ");
    scanf("%d",&b);

    for(int i=1;i<=a;i++){
        for(int j=1; j<=i; j++){
            printf("%4d",b);
        }
        printf("\n");
    }
    return 0;
}

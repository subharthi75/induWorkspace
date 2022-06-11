#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    int k=1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf("%4d",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("I/P:");
    scanf("%d",&a);

    for(int i=1;i<=a;i++){

        for(int j=1;j<=a-i;j++){
            printf(" ");
        }

        for(int j=1;j<=2*i-1;j++){
            if(j<=i)
                printf("%d",j);
            else
                printf("%d",2*i-j);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("I/P:");
    scanf("%d",&a);

    for(int i=a;i>=1;i--){

        for(int j=a-i;j>=1;j--){
            printf(" ");
        }

        for(int j=2*i-1;j>=1;j--){
            if(j<=i)
                printf("%d",j);
            else
                printf("%d",2*i-j);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("I/P:");
    scanf("%d",&a);

    int s=1;
    for(int i=1; i<=a; i++){

        for(int j=1; j<=a-i; j++){
            printf("    ");
        }
        for(int j=1; j<=i*2-1; j++){
            printf("%4d",s);
            s++;
        }
        printf("\n");
    }
    return 0;
}

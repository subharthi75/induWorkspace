#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("I/P:");
    scanf("%d",&a);

    for(int i=1;i<=(a+1)/2;i++){
        printf("%d",i);
    }
    for(int j=a/2;j>=1;j--){
        printf("%d",j);
    }
    return 0;
}

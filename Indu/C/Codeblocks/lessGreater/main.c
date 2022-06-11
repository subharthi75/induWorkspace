#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter number 1:");
    scanf("%d",&a);
    int b;
    printf("Enter number 2:");
    scanf("%d",&b);
    if(a<b){
       printf("%d is less than %d",a,b);
    }else{
        printf("%d is greater than %d",a,b);
    }
    return 0;
}

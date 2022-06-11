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
    if(a>b){
        printf("Greater number is %d",a);
    }else if(a<b){
        printf("Greater number is %d",b);
    }
    return 0;
}

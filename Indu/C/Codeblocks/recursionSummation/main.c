#include <stdio.h>
#include <stdlib.h>
int sum(int);
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    int b=sum(a);

    printf("Summation of %d is %d",a,b);
}
int sum(int a){
    if(a==1){
        return 1;
    }
    return a+sum(a-1);
}

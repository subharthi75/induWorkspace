#include <stdio.h>
#include <stdlib.h>
int fact(int);
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    int b=fact(a);

    printf("Factorial of %d is %d",a,b);
}
int fact(int a){
    if(a==1){
        return 1;
    }
    return a*fact(a-1);
}

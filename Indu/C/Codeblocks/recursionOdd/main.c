#include <stdio.h>
#include <stdlib.h>
int addOdd(int);
int main()
{
 int a;
 printf("Enter a number:");
 scanf("%d",&a);

 int b=addOdd(a);
 printf("%d",b);
}
int addOdd(int a){
    if(a==1){
        return 0;
    }else if(a%2!=0){
        return a+addOdd(a-1);
    }else{
        return addOdd(a-1);
    }
}

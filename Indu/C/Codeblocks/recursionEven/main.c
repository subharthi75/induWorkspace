#include <stdio.h>
#include <stdlib.h>
int addEven(int);
int main()
{
 int a;
 printf("Enter a number:");
 scanf("%d",&a);

 int b=addEven(a);
 printf("%d",b);
}
int addEven(int a){
    if(a==1){
        return 0;
    }else if(a%2==0){
        return a+addEven(a-1);
    }else{
        return addEven(a-1);
    }
}

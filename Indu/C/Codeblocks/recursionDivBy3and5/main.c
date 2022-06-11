#include <stdio.h>
#include <stdlib.h>
int div3_5(int);
int main()
{
 int a;
 printf("Enter a number:");
 scanf("%d",&a);

 int b=div3_5(a);
 printf("%d",b);
}
int div3_5(int a){
    if(a==1){
        return 0;
    }else if(a%3==0 && a%5==0){
        return a+div3_5(a-1);
    }else{
        return div3_5(a-1);
    }
}

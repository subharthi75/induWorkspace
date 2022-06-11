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
   int c;
   printf("Enter number 3:");
   scanf("%d",&c);
   if(a>b && a>c){
    printf("Largest:%d",a);
   }else if(b>a && b>c){
       printf("Largest:%d",b);
   }else if(c>a && c>b){
       printf("Largest:%d",c);
   }
    return 0;
}

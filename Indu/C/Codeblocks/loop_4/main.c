#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a;
   printf("Enter initial range:");
   scanf("%d",&a);
   int b;
   printf("Enter final range:");
   scanf("%d",&b);
   int c;
   if(a%2!=0){
    c=a+1;
   }else{
       c=a;
   }
   int s=0;

   for(int j=c;j<=b;j=j+2){
    printf("%d ",j);
    if(c<b){
        printf("+ ");
    }
    s=s+j;
   }
   printf("= %d \n",s);
   printf("Sum of even numbers form %d to %d is %d",c,b,s);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   printf("Rate of goods:");
   scanf("%d",&a);
   int b;
   printf("Quantity:");
   scanf("%d",&b);
   int c=a*b;
   printf("Total:%d Rs.\n",c);
   int d;
   if(c<1000){
        d=0;
   }else if(c>=1000 && c<2000){
       d=10;
   }else if(c>=2000 && c<5000){
       d=20;
   }else if(c>5000){
       d=30;
   }

   int disc = c*d/100;
   printf("Discount: %d\n",disc);

   int e;
   e=c-disc;
   printf("Gross:%d Rs.",e);
    return 0;
}

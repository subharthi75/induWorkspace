#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[10][10],i,j,n,trace;
   printf("Enter the order of A matrix  ");
   scanf("%d",&n);
   printf("\n:::::::::::::::::::::::::::::::::\n");

   printf("\n Input A matrix   \n============================\n");
   for(i=0; i<n; ++i)
    for(j=0; j<n; ++j)
        scanf("  %d",&a[i][j]);

   trace=0;
   for(i=0; i<n; ++i)
    trace += a[i][i];
   printf("\nTrace  %d\n~~~~~~~~~~~~~~~~\n",trace);
    return 0;
}

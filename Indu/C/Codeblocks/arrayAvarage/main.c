#include <stdio.h>
#include <stdlib.h>

int main()
{
 int arrAdd[10];
 int g;
 printf("%d\n\n",g);
 int s=0;
 int b;
 for(int i=0;i<10;i++){
    printf("Enter data for student %d:",i+1);
    scanf("%d",&arrAdd[i]);
 }
 for(int i=0;i<10;i++){
    s=s+arrAdd[i];
 }
 printf("Total : %d\n",s);

 printf("Average: %f",(float)s/10);

return 0;
}

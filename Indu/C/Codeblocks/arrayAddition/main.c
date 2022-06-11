#include <stdio.h>
#include <stdlib.h>

int main()
{
 int arrAdd[10];
 int s=0;
 for(int i=0;i<10;i++){
    printf("Enter data for student %d:",i+1);
    scanf("%d",&arrAdd[i]);
 }
 for(int i=0;i<10;i++){
    s=s+arrAdd[i];
 }
 printf("Total : ");
 for(int i=0;i<10;i++){
 }
  printf("%d ",s);
}

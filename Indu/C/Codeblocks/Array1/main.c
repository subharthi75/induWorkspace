#include <stdio.h>
#include <stdlib.h>

int main()
{
 int arr[15];

 for(int i=0;i<15;i++){
    printf("Enter number %d:",i+1);
    scanf("%d",&arr[i]);
 }
 printf("Values inside arrey : ");
 for(int i=0;i<15;i++){
    printf("%d ",arr[i]);
 }
 for(int i=0;i<15;i++){
    arr[i]=arr[i]+5;
 }
 printf("arrey: ");
 for(int i=0;i<15;i++){
    printf("%d ",arr[i]);
 }
}

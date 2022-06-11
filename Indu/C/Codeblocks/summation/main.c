#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("How many numbers do you want to add:");
    scanf("%d",&a);
    int num;
     int s=0;
    for(int i=1;i<=a;i++){
        printf("Enter number %d:",i);
        scanf("%d",&num);
        s=s+num;

    }
printf("Summation:%d",s);
        return 0;
}

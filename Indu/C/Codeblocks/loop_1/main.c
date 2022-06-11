#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int s=0;
    for(int i=1;i<=a;i++){
        printf("%d ",i);
        if(i<a){
            printf("+ ");
        }
        s=s+i;
    }
    printf("= %d \n",s);
    printf("Sum upto %d is %d",a,s);
    return 0;
}

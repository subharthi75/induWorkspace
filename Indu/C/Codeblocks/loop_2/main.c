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
    int s=0;
    for(int i=a;i<=b;i++){
        printf("%d ",i);
        if(i<b){
            printf("+ ");
        }
        s=s+i;
    }
    printf("= %d \n",s);
    printf("Sum from %d to %d is %d",a,b,s);
    return 0;
}

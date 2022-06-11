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

    printf("All the number divisible by 3 and between %d to %d : ",a,b);
    for(int j=a;j<=b;j++){
            if(j % 3==0){
                printf("%d ",j);
            }

    }
    return 0;
}

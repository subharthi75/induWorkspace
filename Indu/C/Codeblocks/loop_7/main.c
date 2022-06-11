#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);


    printf("All the number divisible by 3 or by 5 and between 1 to %d : ",a);
    for(int j=1;j<=a;j++){
            if(j % 3 == 0 || j % 5 == 0){
                printf("%d ",j);
            }

    }
    return 0;
}

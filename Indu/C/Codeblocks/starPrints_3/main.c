#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter line number:");
    scanf("%d",&a);

    for(int i=1;i<=2*a-1;i++){
        if(i<=a){
            for(int j=1;j<=i;j++){
                printf("*");
            }
        }else{
            for(int k=1;k<=2*a-i;k++){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

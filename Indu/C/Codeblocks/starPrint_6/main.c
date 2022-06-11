#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a;
    printf("Enter line number:");
    scanf("%d",&a);

    for(int i=1;i<=a*2-1;i++){
        if(i<=a){
            for(int j=1; j<=a-i; j++){
                printf(" ");
            }
            for(int j=1; j<=2*i-1; j++){
                printf("*");
            }
        }else{
            for(int j=1; j<=i-a; j++){
                printf(" ");
            }
            for(int j=1; j<=4*a-2*i-1; j++){
                printf("*");
            }
        }

        printf("\n");
    }


    return 0;
}

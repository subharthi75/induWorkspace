#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a;
    printf("Enter line number:");
    scanf("%d",&a);

    for(int i=1;i<=a;i++){

         for(int k=1; k<=(a-i); k++){
                printf(" ");
            }
        for(int j=1; j<=i*2-1; j++){
                printf("*");

        }
        printf("\n");
    }

     for(int i=a-1;i>=1;i--){

         for(int k=(a-i); k>=1; k--){
                printf(" ");
            }
        for(int j=i*2-1; j>=1; j--){
                printf("*");

        }
        printf("\n");
    }
    return 0;
}

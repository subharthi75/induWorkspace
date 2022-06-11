#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter starting number:");
    scanf("%d",&a);
    int b;
    printf("Enter finishing number:");
    scanf("%d",&b);
    for(int i=a;i<=b;i++){
        printf("%d  ",i);
    }

    printf("\n");

    int g;
     if(a%2==0){
        g=a;
     }else{
         g=a+1;
     }
     for(int j=g;j<=b;j=j+2){

        printf("%d  ",j);
        }

     printf("\n");

     int c;
     if(a%2==0){
        c=a+1;
     }else{
         c=a;
     }

     for(int j=c;j<=b;j=j+2){
        printf("%d  ",j);
     }
    return 0;
}

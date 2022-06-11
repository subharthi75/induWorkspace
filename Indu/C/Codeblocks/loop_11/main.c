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

    int s=0;
    int state=0;

     for(int i=a;i<=b;i++){
        if(i%2==0){
            if(state==0){
                s=s+i;
                state=1;
            }else{
                s=s-i;
                state=0;
            }
        }
        }
        printf("sum of even is:%d",s);
       return 0;
}

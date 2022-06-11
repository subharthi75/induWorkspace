#include <stdio.h>
#include <stdlib.h>
void nprint(int);
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    nprint(a);
}
void nprint(int a){
    printf("%d ",a);

    if(a>1){
        nprint(a-1);
    }
}

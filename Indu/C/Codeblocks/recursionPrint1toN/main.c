#include <stdio.h>
#include <stdlib.h>
void print(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    print(n);
}
void print(int n){
    if(n>1){
        print(n-1);
    }
    printf("%d ",n);
}

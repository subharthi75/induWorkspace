#include <stdio.h>
#include <stdlib.h>
void swap(int,int);
int main()
{
    int a,b;
    a=5;
    b=7;
    printf("a=%d, b=%d \n",a,b);
    swap(a,b);
    printf("a=%d, b=%d \n",a,b);

}
void swap(int a,int b){
int t;
    t=a;
    a=b;
    b=t;

    printf("In swap: a=%d, b=%d \n",a,b);
}

#include <stdio.h>
#include <stdlib.h>
void swap(int*,int*);
int main()
{
    int a,b;
    a=5;
    b=7;
    printf("a=%d, b=%d \n",a,b);
    swap(&a,&b);
    printf("a=%d, b=%d \n",a,b);

}
void swap(int *pk, int *pl){
int t;
    t=*pk;
    *pk=*pl;
    *pl=t;


}

#include <stdio.h>
#include <stdlib.h>
int fact(int);
int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d",&a);

  int j=fact(a);
    printf("Factorial of %d is %d",a,j);
}
int fact(int a){
    int s=1;
    for(int i=1;i<=a;i++){
        s=s*i;
    }
    return s;
}

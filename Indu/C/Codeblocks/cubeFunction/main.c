#include <stdio.h>
#include <stdlib.h>
int cube(int);
int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d",&a);

  int j=cube(a);
    printf("cube of %d is %d",a,j);
}

int cube(int a){

    return a*a*a;
}


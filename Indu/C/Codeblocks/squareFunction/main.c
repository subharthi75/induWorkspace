#include <stdio.h>
#include <stdlib.h>
int square(int);
int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d",&a);

  int j=square(a);
    printf("Square of %d is %d",a,j);
}

int square(int a){

    return a*a;
}

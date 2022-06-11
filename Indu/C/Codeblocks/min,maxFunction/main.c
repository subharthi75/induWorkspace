#include <stdio.h>
#include <stdlib.h>
int min(int,int,int);
int max(int,int,int);
int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d",&a);

  int b;
  printf("Enter a number:");
  scanf("%d",&b);

  int c;
  printf("Enter a number:");
  scanf("%d",&c);

  int j=min(a,b,c);
    printf("min of %d, %d and %d is %d \n",a,b,c,j);

  int k=max(a,b,c);
    printf("max of %d, %d and %d is %d",a,b,c,k);
}


int min(int a, int b, int c){

    if(a<b && a<c){
        int m=a;
    return m;
    }else if(b<a && b<c){
        int h=b;
        return h;
    }else if(c<a && c<b){
        int g=c;
        return g;
    }
}
int max(int a, int b, int c){

    if(a>b && a>c){
        int n=a;
        return n;
    }else if(b>a && b>c){
        int t=b;
        return t;
    }else{
        int z=c;
        return z;
    }
}

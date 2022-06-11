#include <stdio.h>
#include <stdlib.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int divh(int,int);
int main()
{
    int a;
    printf("Enter number 1:");
    scanf("%d",&a);

    int b;
    printf("Enter number 2:");
    scanf("%d",&b);

    printf("For addition press 1\n");
    printf("For subtraction press 2\n");
    printf("For multiplication press 3\n");
    printf("For division press 4\n");

    int c;
    printf("Enter your choice:");
    scanf("%d",&c);
    if(c==1){
        printf("Addition of ");
        int k=add(a,b);
        printf("%d and %d is %d",a,b,k);

    }else if(c==2){
        printf("Subtraction of ");
        int l=sub(a,b);
        printf("%d and %d is %d",a,b,l);

    }else if(c==3){
        printf("Multiplication of ");
        int m=mul(a,b);
        printf("%d and %d is %d",a,b,m);

    }else{
        printf("Division of ");
        int n=divh(a,b);
        printf("%d and %d is %d",a,b,n);
    }

}

    int add(int a,int b){
        int j=a+b;
        return j;
    }
    int sub(int a, int b){
        int i=a-b;
        return i;
    }
    int mul(int a,int b){
        int h=a*b;
        return h;
    }
    int divh(int a,int b){
        int g=a/b;
        return g;
    }



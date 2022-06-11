#include<stdio.h>
int main(){
int a;
printf("principal amount:");
scanf("%d",&a);
int b;
printf("time:");
scanf("%d",&b);
int c;
printf("rate:");
scanf("%d",&c);
int d=a*b*c/100;
printf("interest is:%d",d);
return 0;
}

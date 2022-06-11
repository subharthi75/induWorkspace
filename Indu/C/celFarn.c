#include<stdio.h>
int main(){
float a;
printf("tempareture in celcious:");
scanf("%f",&a);
float b=(a*9+160)/5;
printf("in farenheit:%f degree",b);
float c;
printf("tempareture in farenheit:");
scanf("%f",&c);
float d=(c-32)*5/9;
printf("in celcious:%f degree",d);
return 0;
}
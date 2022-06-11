#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Marks in Bengali:");
    scanf("%d",&a);
    int b;
    printf("Marks in English:");
    scanf("%d",&b);
    int c;
    printf("Marks in Math:");
    scanf("%d",&c);
    int d;
    d=a+b+c;
    printf("Total:%d\n",d);
    int e;
    e=d/3;
    printf("Average:%d\n",e);
    if(e>=90){
        printf("Grade:AA");
    }else if(e>=80){
        printf("Grade:A+");
    }else if(e>=70){
        printf("Grade:A");
    }else if(e>=60){
        printf("Grade:B");
    }else if(e>=50){
        printf("Grade:C");
    }else if(e>=40){
        printf("Grade:D");
    }else{
        printf("Fail");
    }

    return 0;
}

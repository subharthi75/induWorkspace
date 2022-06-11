#include <stdio.h>
#include <stdlib.h>

void main()
{
    typedef struct {
        int roll;
        char name[50];
        int beng;
        int eng;
    } student;

    student g;
    student* ptr = &g;

    scanf("%d",&ptr->roll);
    scanf("%s",&g.name);
    scanf("%d",&g.beng);
    scanf("%d",&g.eng);

    printf("Roll:%d, name:%s, beng:%d, eng:%d",g.roll,g.name,g.beng,g.eng);

}

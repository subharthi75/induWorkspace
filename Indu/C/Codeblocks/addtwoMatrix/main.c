#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q;
    printf("Input row and column of A matrix: ");
    scanf("%d %d",&n,&m);
    printf("\nInput row and column of B matrix: ");
    scanf("%d %d",&p,&q);
    /*check if matrices can be added*/
    if((n==p)&&(m==q)){
        printf("matrices can be added \n");
        printf("Input A-matrix\n");
        for(i=0;i<n;++i)
            for(j=0;j<m;++j)
                scanf("%d",&a[i][j]);

        printf("Input B-matrix\n");
        for(i=0;i<n;++i)
            for(j=0;j<m;++j)
                scanf("%d",&b[i][j]);

        /*Addition of two matrices*/
        for(i=0;i<n;++i)
            for(j=0;j<m;++j)
                c[i][j] = a[i][j] + b[i][j];
        printf("Sum of A and B matrices:\n");
        for(i=0;i<n;++i){
            for(j=0;j<m;++j)
                printf("%5d",c[i][j]);

            printf("\n");
        }
        /*end if*/
    }else{
        printf("Matrix cannot be added !\n");
    }/*Main*/
    return 0;
}

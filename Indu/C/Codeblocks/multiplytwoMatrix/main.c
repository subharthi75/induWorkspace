#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n,ip,k,p,q;

    printf("Input row and column of A-matrix:");
    scanf("%d %d",&m,&n);
    printf("\n========================================\n");

    printf("\nInput row and column of B matrix: ");
    scanf("%d %d",&k,&q);
    printf("\n========================================\n");

    if(n == k){
        printf("matrices can be multiplied\n");
        printf("resultant matrix is %d x %d\n",m,q);
        printf("\nInput A-matrix\n^^^^^^^^^^^^^^^^^^^\n");
        read_mat(a,m,n);
        printf("\nInput B-matrix\n^^^^^^^^^^^^^^^^^^^\n");
        read_mat(b,k,q);
        for(i=0; i<m; ++i)
            for(j=0; j<q; ++j){
                c[i][j]=0;
                for(ip=0; ip<n; ++ip)
                c[i][j]=c[i][j]+a[i][ip]*b[ip][j];
            }
               printf("Resultant of A and B matrices:\n");
               write_mat(c,m,q);
    }else{
        printf("col of matrix A must be equal to row of matrix B\n");
        printf("matrices cannot be multiplied!\n");
    }


}
read_mat(a,m,n)
int a[10][10],m,n;
{
    int i,j;
     for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                scanf("%d",&a[i][j]);
}
write_mat(a,m,n)
int a[10][10],m,n;
{
    int i,j;

    for(i=0; i<m; i++)
    {
            for(j=0; j<n; j++)
                printf("%5d",a[i][j]);

            printf("\n");
    }
}

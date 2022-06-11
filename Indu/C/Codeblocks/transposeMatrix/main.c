#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],b[10][10],i,j,m,n;

    printf("Input row and column of A-matrix:");
    scanf("%d %d",&n,&m);
    printf("\n========================================\n");

    printf("\nInput A-matrix\n^^^^^^^^^^^^^^^^^^^\n");
    for(i=0; i<n; ++i)
        for(j=0; j<m; ++j)
           scanf("%d",&a[i][j]);

    for(i=0; i<m; ++i)
        for(j=0; j<n; ++j)
            b[i][j] = a[j][i];
        printf("\nTranspose of matrix A is:\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        for(i=0; i<m; ++i){
          for(j=0; j<n; ++j)
            printf("%5d",b[i][j]);

          printf("\n");
        }
    return 0;
}

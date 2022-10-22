#include <stdio.h>
#include <stdlib.h>

int main()
{

    int mat[2][2];
    int mat2[2][2];
    int mat3 [2][2];
    int i, j ,a,b,k,y;
    printf("enter the element of matrix \n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&mat[i][j]);
        }

    }
    printf("enter the element of matrix 2 \n");
    for(i=0;i<2;i++)
    {
        for( j=0;j<2;j++)
        {
            scanf("%d",&mat[a][b]);
        }
    }
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            mat3[i][j]=mat[i][j] +mat2[i][j];
            printf( mat3[i][j]);

        }

    }


    return 0;
}

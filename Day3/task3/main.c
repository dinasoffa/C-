#include <stdio.h>
#include <stdlib.h>

int main()
{
   int matrix1[2][2];
   int matrix2[2][2];
   int matrix3[2][2];
   printf("enter the element of matrix 1 \n");
   for (int i=0; i<2; i++)
   {
       for (int j=0;j<2; j++)
       {
           scanf("%d", &matrix1[i][j]);
       }
   }
   printf("enter the element of matrix 2 \n");
   for (int i=0; i<2; i++)
   {
       for (int j=0;j<2; j++)
       {
           scanf("%d", &matrix2[i][j]);
       }
   }
   for (int i=0; i<2; i++)
   {
       for (int j=0;j<2; j++)
       {
           matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
           printf("%d\t",matrix3[i][j]);
       }
   }



    return 0;
}

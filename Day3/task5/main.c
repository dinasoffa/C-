#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    float avr=0;
    int sum=0;
    int matrix[10][10];
    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of matrix\n");

   for (int c = 0; c < m; c++)
      for (int d = 0; d < n; d++)
         scanf("%d", &matrix[c][d]);


   for (int c = 0; c < m; c++)
      for (int d = 0 ; d < n; d++)
         {
            sum=sum+matrix[c][d];
            avr=(sum)/(n*m);
         }

    printf("the sum = %d",sum );
    printf("the avr = %d",avr );







    return 0;
}

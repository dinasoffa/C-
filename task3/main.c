#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("enter the number of student \n");
    scanf("%d",& num1);
    int x=0;
    int *sub =(int *)malloc(num1 *sizeof(int));
    int *sum =(int *)malloc(num1 *sizeof(int));
    float *avr =(float *)malloc(num1 *sizeof(float));
    for (x=0;x<num1;x++)
    {
    printf("enter the number of subjects of student %d \n", x+1);
    scanf("%d", &sub[x]);
    }

    int i;
    int **arr =(int **)malloc(num1 *sizeof(int *));

    for ( i=0 ;i<num1; i++)
    {
        arr[i]=(int *)malloc(sub[i] *sizeof(int));

    }
    for (i=0 ; i<num1; i++)
    {
       for (int j=0; j<sub[i] ;j++)
       {
           printf("enter the degree of subject %d of student %d\n", j+1, i+1);
           scanf("%d", &arr[i][j]);

       }
    }
    for (i=0; i<num1 ;i++)
       {
          sum[i]=0;


       }
     for (i=0; i<num1 ;i++)
       {
           for (int j=0 ; j<sub[i]; j++)
           {
               sum[i]+=arr[i][j];
           }

       }

       for (i=0; i<num1 ;i++)
       {
           printf("sum of student %d is %d\n",i+1, sum[i]);
       }
       for (i=0; i<num1 ;i++)
       {
           avr[i] =sum[i]/sub[i];
           printf("avarage of student %d is %f\n",i+1, avr[i]);
       }





    return 0;
}

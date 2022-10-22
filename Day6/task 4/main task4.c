#include <stdio.h>
#include <stdlib.h>
#include<math.h>

#include <math.h>
typedef struct st1 st1;
typedef struct st2 ;
struct st1{
int x1;
int y1;
int x2;
int y2;
};
void change (st1 *cha , int newx , int newy)
{
    cha->x2 =newx;
    cha->y2 =newy;
    float h=  sqrt(pow(cha->x2 - cha->x1, 2) + pow(cha->y2 - cha->y1, 2) *1.0 );

    printf("the new length is \t %f ", h);



}
void length (st1 *L1)
{

    float h=  sqrt(pow(L1->x2 - L1->x1, 2) + pow(L1->y2 - L1->y1, 2) *1.0 );
    printf("the old length is \t %f \n", h);




}
int main()
{
    int num;
    st1 st;
    printf("enter the num that u want \n");
    scanf("%d", &num);
    st1 *pr= (st1 *) malloc(num *sizeof(int));
    for (int i=0; i<num; i++)
    {
      printf ("item %d \n", i+1);
      int x1;
      int y1;
      printf("the x1 point \t");
      scanf("%d", &(pr+i)->x1);
      printf("the y1 point \t");
      scanf("%d", &(pr+i)->y1);
      printf("the x2 point \t");
      scanf("%d", &(pr+i)->x2);
      printf("the y2 point \t");
      scanf("%d", &(pr+i)->y2);
      printf("the newx point \t");
      scanf("%d", &x1);
      printf("the newy point \t");
      scanf("%d", &y1);
      printf("\n");
      length((pr+i));
      change ((pr+i), x1, y1);
      printf("\n");


    }
    getch();



    return 0;
}

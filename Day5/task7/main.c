#include <stdio.h>
#include <stdlib.h>
typedef struct str1 str1;

struct str1{
int hours ;
int min1 ;
int second1;
};



int getdiff (str1 st1, str1 st2)
{
    if (st1.hours >=st2.hours)
    {
         printf ("diff hours is %d\n", st1.hours-st2.hours);

    }

    else
        {

            printf ("diff hours is %d\n", st2.hours-st1.hours);
        }
     if (st1.min1 >=st2.min1)
     {
         printf ("diff minutes is %d \n", st1.min1-st2.min1);

     }

     else
        {

            printf ("diff minutes is %d \n", st2.min1-st1.min1);
        }

     if (st1.second1 >=st2.second1)
     {
         printf ("diff seconds is %d \n", st1.second1-st2.second1);
     }

    else
        {

            printf ("diff second is %d \n", st2.second1-st1.second1);
        }



return 0;
}
int main()

{
    str1 t1;
    str1 t2;
    printf("enter the time of 1\n" );
    scanf("%d",&t1.hours);
    scanf("%d" ,&t1.min1);
    scanf("%d",&t1.second1);
    printf("enter the time of 2\n" );
    scanf("%d", &t2.hours);
    scanf("%d", &t2.min1);
    scanf("%d", &t2.second1);

    getdiff(t1, t2);


    return 0;
}

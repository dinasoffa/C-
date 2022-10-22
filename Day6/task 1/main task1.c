#include <stdio.h>
#include <stdlib.h>
int swapint (int *p1,int *p2)
{

    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    return 0;

}
int main()
{
    int x=5;
    int  y=3;
    printf("the numbers before the swap is \n %d\n %d \n",x,y );
    swapint (&x, &y);
    printf("the numbers before the swap is \n %d\n %d \n",x,y );
    return 0;
}

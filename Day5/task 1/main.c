#include <stdio.h>
#include <stdlib.h>

int max (int x, int y, int z)
{
    if (x>=y && x>z)
    {
        printf("the max is %d", x);
    }
    else if (y>=x && y>=z)
        printf("the max is %d", y);
    else
    {
        printf("the max is %d", z);
    }

}
int main()
{
    int a,b,c;
    printf("enter the numbers \n ");
    scanf("%d%d%d", &a,&b,&c);
    max(a,b,c);

    return 0;
}

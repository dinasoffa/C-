#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the number \n");
    int x;
    scanf("%d", &x);
    if (x%2 ==0)
    {
        printf("the number is even");

    }
    else
    {
        printf("the number is odd");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum;
    int x;
    printf("enter the numbers \n");

    for (int i=0 ; i<100; i++)
    {
        scanf("%d", &x);
        sum=sum +x;
        if (sum >100)
            break;

    }
    printf("sum = %i", sum);
    return 0;
}

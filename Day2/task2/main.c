#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the numbers \n");
    int n1,n2,n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1>=n2 && n1>=n3)
    {
        printf("the largest number is %i", n1);

    }
    else if (n2>n1 && n2>=n3)
    {
        printf("the largest number is %i", n2);
    }
    else
        printf("the largest number is %i ", n3);

    return 0;
}

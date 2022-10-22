#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3];
    printf("enter the element of array \n");
    for (int i=0; i<3; i++)
    {
        scanf("%d ", &arr[i]);
    }
    for (int i=0; i<3; i++)
    {
        printf("the elements are : %d \n", arr[i] );
    }
    return 0;
}

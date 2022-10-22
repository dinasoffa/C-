#include <stdio.h>
#include <stdlib.h>

void print1 (int arr[] )
{
    for (int i=0; i<10; i++)
    {
        printf("%d \n", arr[i]*10);
    }
}
void print2 (int *ptr, int size)
{
    for (int j=0 ; j<10 ;++j)
    {
        printf("%d \n", *(ptr+j)*10);
    }
}

int main()
{
    int x=10;

    int arr1[10];
    printf("enter the elements \n");
    for (int x=0; x<10; x++)
    {
        scanf("%d", & arr1[x]);

    }
    printf("the elements from array are :\n");
    print1 (arr1);
    printf("enter the data of pointer \n");
    int *pt= (int *) malloc(10 *sizeof(int));
    for (int i=0; i<10; i++)
    {
        scanf("%d", &*(pt+i));
    }

    printf("the elements from pointer are :\n");
    print2(pt, x);
    return 0;
}

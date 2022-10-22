#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i=3 ; i>0; i--)
    {
        for (int j =1 ; j<3 ; j++)
        {
            printf("%d*%d=%d \t", i ,j , i*j);

        }
    }

    return 0;
}

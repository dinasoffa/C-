#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max =0;
    int tmp [4] ={1,2,6,0};
    for (int i=0; i<4; i++)
    {
        if (tmp[i]> max)
        {
            max=tmp[i];
        }
    }
    printf(" the max element is %d", max);
    return 0;
}

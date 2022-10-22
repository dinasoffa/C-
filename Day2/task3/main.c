#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the degree \n");
    int score ;
    scanf("%d", &score);

    switch (score/10)
    {
    case 10:
    case 9 :
        printf("grade is : excellent ");
        break;

    case 8 :
        printf("grade is :very good");
        break;

    case 7 :
    case 6 :
        printf(" grade is good");
        break;

    case 5 :
        printf(" grade is : fair");
        break;

    case 4 :
    case 3 :
    case 2 :
        printf("failed");
        break;

    }


    return 0;
}

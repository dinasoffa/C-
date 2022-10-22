#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    there:


    printf("1- go to a \n");
    printf("2- go to b \n");
    printf("3- go to c \n");
    printf("4- go to manu \n");


    printf("enter your choose \n");
    scanf("%i", &x);

     if (x==1)
    {
        system("cls");
        printf("1- go to a \n");
    }

    else if (x==2)
    {
         system("cls");
         printf("2- go to b \n");
    }


    else if (x==3)
    {
        system("cls");
         printf("go to c \n");

    }
    else if (x==4)
    {
        system("cls");
        goto there;
    }

printf("if you want to go back enter 0 \n");
int y;
scanf("%d", &y);
if (y==0)
    goto there;

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter your frist name ");
    char str1[20];
    gets(str1);
    printf("enter your second name ");
    char str2[20];
    gets(str2);
    printf("your first name is %s \n", str1);
    printf("your second name is %s \n", str2);
    printf(strcat(str1, str2 ));
//    strcat(str1, str2 );


    return 0;
}

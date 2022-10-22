#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the characters \n");
    char c;
    scanf("%c", &c);
    if ((c >= 'a' && c <= 'z')|| (c >= 'A' && c <= 'Z'))
    {
        printf("that character from alphabet %c", c);
    }


    else
    {
        printf("that character is not alphabet %c", c);
    }


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch = getch(ch);
    printf("%d", ch);
    if (ch == -32)
    {
        ch =getch();
        printf("extended : %d", ch);
    }
    else
    {
        printf("normal %c", ch);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
char str[20];
gets(str);
int count1, count2;
for (int i=0; i<20; i++)
{
    if ((str[i]>='a' && str[i] <='z' )|| (str[i]>='A' && str[i]<='Z'))
        count1 ++;
    else if (str[i]==32)
        count2 ++;
}
printf("the number of alphabet is %d \n", count1);
printf("the number of word is %d", count2);


return 0;
}


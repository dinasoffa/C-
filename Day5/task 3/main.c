#include <stdio.h>
#include <stdlib.h>
typedef struct employees employees;
struct employees
{
    char last [20];
    char first[20];
    int pnumber;
    int salary;
};

int main()
{
    employees employee[4];

    for ( int i=0; i < 4; i++)
    {

    printf("first name: ");
    scanf("%s", employee[i].first);

    printf("last name: ");
    scanf("%s", employee[i].last);

    printf("Salary: ");
    scanf("%d", &employee[i].salary);
    }
    printf("the information that you push are \n");
    for (int i=0; i < 4; i++)
    {

        printf("first name: %s\nlast name: %s\n Salary: %d\n",employee[i].first,employee[i].last, employee[i].salary);
    }

    getchar();
    getchar();
    return 0;


}







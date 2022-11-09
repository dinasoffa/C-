#include <stdio.h>
#include <stdlib.h>
typedef struct employees {
int id;
int salary

}employees;
int main()
{
    employees *p =(employees *)malloc(3 *sizeof(employees));

    for (int i=0; i<3; i++)
    {
        printf("enter the id of empoyee %d \n", i+1);
        scanf("%d", &(p+i)->id);
        printf("enter the salary of empoyee %d \n", i+1);
        scanf("%d", &(p+i)->salary);

    }
    for (int j=0; j<3; j++)
    {
        printf("the id of employee %d \t %d\n", j+1, (p+j)->id);
        printf("the salary of employee %d \t %d\n", j+1,(p+j)->salary);


    }


    return 0;
}

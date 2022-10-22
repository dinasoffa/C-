#include <stdio.h>
#include <stdlib.h>
typedef struct employee employee;
struct employee {
int id ;
char name [20];
int salary;

};


int main()
{
    employee emp;
    printf("enter your id \n");
    scanf("%d", &emp.id);
    printf("enter your name \n");
    scanf("%s", emp.name );
    printf("enter your salary \n");
    scanf("%d", &emp.salary);

    printf("your id is  %d \n", emp.id);
    printf("your name is %s \n", emp.name);
    printf("your salary is %d \n", emp.salary);



    return 0;
}

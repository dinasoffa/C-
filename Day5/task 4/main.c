#include <stdio.h>
#include <stdlib.h>
typedef struct birthdate birthdate;
typedef struct employees employees;
struct birthdate {
int day;
int month;
int year;
};

struct employees {
int id;
char name [20];
int salary;
birthdate date;

};

int main()
{
    employees emp={333, "dina", 30000, {1,1,2020}};
    printf("your id is %d  \n ", emp.id);
    printf("your name is  %s \n", emp.name);
    printf("your salary is %d \n", emp.salary);
    printf("your birthdate is %d \t %d \t %d  ", emp.date.day, emp.date.month, emp.date.year);

    return 0;
}

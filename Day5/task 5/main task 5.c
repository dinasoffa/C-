#include <stdio.h>
#include <stdlib.h>

//void addEmployee();
//void printEmployee();
typedef struct employeelist employeelist;
struct employeelist
{
    char first [20];
    char second[20];
    int salary;
};

int i;

void addEmployee()
{
    employeelist employee[3];

    for (i=0; i < 3; i++)
    {

    printf("first name: ");
    scanf("%s", &employee[i].first);

    printf("second name: ");
    scanf("%s", &employee[i].second);

    printf("Salary: ");
    scanf("%d", &employee[i].salary);
    }

    //return 0;
}

void  printEmployee()
{
    employeelist employee[3];
    for (i=0; i < 3; i++)
    {

        printf("first name: %s\n ",employee[i].first);
        printf("last name: %s \n",employee[i].second);
        printf("salary : %d \n", employee[i].salary);

    }

 //   getchar();
   // getchar();
    //return 0;
}





int main()
{

    employeelist employee[3];
    addEmployee();
    printf("the information that you push is \n");
    printEmployee();

    return 0;




}

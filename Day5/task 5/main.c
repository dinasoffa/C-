#include <stdio.h>
#include <stdlib.h>

int addEmployee();
int printEmployee();
struct employeelist
{
    char first [20];
    char second[20];
    int salary;
};

int i;

int addEmployee()
{
    struct employeelist employee[5];

    for (i=0; i < 3; i++)
    {

    printf("first name: ");
    scanf("%s", employee[i].first);

    printf("second name: ");
    scanf("%s", employee[i].second);

    printf("Salary: ");
    scanf("%d", &employee[i].salary);
    }

    return 0;
}

int printEmployee()
{
    struct employeelist employee[5];
    for (i=0; i < 3; i++)
    {

        printf("first name: %s\n last name: %s \nSalary: %d\n",employee[i].first,employee[i].second, employee[i].salary);
    }

 //   getchar();
   // getchar();
    return 0;
}





int main()
{

    struct employeelist employee[3];
    addEmployee();
    printf("the information that you push is \n");
    printEmployee();

    return 0;




}

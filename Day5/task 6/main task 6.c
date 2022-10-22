#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#define up 72
#define down  80
#define home  71
#define end  79
typedef struct employees employees;
struct employees{
int id ;
char name  [20];
int salary ;

};


int main()
{




COORD coord={0,0};                   // this is global variable
                                    //center of axis is set to the top left cornor of the screen
 void gotoxy(int x,int y)
 {
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }


void SetColor(int ForgC)
 {
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;

    }
    char emp [5][20]= {"employee 1","employee 2", "employee 3","employee 4","exit " };

    for (int i =0 ; i<5; i++)
        printf("%s \n", emp[i]);


    employees employ1 ={1, "dina" , 300000};
    employees employ2 ={2, "sara" , 100000};
    employees employ3 ={3, "ali" , 200000};
    employees employ4 ={4, "mohamed" , 100000};

    int count =0;
    while (1)
    {
        char ch = getch(ch);

     if (ch==down)
        count++;
     else if (ch==up)
        count --;
     else if (ch ==home)
     {
         count =1;

     }

     else if (ch== end)
     {
         count =5;

     }

     switch(count )
     {
     case 1:
        {

            system("cls");

            SetColor(12);
            printf("%s \n", emp[0]);
            SetColor(15);
            printf("%s \n", emp [1]);
            printf("%s \n", emp[2]);
            printf("%s \n", emp[3]);
            printf("%s \n", emp[4]);

            if (ch== 13)
            {
                system("cls");
                SetColor(12);
                printf(" %s \t the id is : %d \t the name is :%s \t the salary is: %d", emp[0], employ1.id, employ1.name, employ1.salary);
                break;
            }
            else
            {
                break;
            }




        }
     case 2:
        {
            system("cls");

            SetColor(15);
            printf("%s \n", emp[0]);
            SetColor(12);
            printf("%s \n", emp [1]);
            SetColor(15);
            printf("%s \n", emp[2]);
            printf("%s \n", emp[3]);
            printf("%s \n", emp[4]);

            if (ch== 13)
            {
                system("cls");
                SetColor(12);
                printf(" %s \t the id is %d \tthe name is  %s \t the salary is %d", emp[1], employ2.id, employ2.name, employ2.salary);
                break;
            }
            else
            {
                break;
            }
        }

     case 3:
        {
            system("cls");

            SetColor(15);
            printf("%s \n", emp[0]);
            printf("%s \n", emp [1]);
            SetColor(12);
            printf("%s \n", emp[2]);
            SetColor(15);
            printf("%s \n", emp[3]);
            printf("%s \n", emp[4]);

            if (ch== 13)
            {
                system("cls");
                SetColor(12);
                printf(" %s \t the id is %d \t the name is %s \t the salary is %d", emp[2], employ3.id, employ3.name, employ3.salary);
                break;
            }
            else
            {
                break;
        }
        }

     case 4:
        {
            system("cls");
            SetColor(15);
            printf("%s \n", emp[0]);
            printf("%s \n", emp [1]);
            printf("%s \n", emp[2]);
            SetColor(12);
            printf("%s \n", emp[3]);
            SetColor(15);
            printf("%s \n", emp[4]);

            if (ch== 13)
            {
                system("cls");
                SetColor(12);
                printf(" %s \t the id is %d \t the name is %s \t the salary is %d", emp[2], employ4.id, employ4.name, employ4.salary);
                break;
            }
            else
            {
                break;
        }
        }

     case 5:
        {

            system("cls");
            SetColor(15);
            printf("%s \n", emp[0]);
            printf("%s \n", emp [1]);
            printf("%s \n", emp[2]);
            printf("%s \n", emp[3]);
            SetColor(12);
            printf("%s \n", emp[4]);


            if (ch== 13)
            {


                goto there;
            }



        }






     }


    }
    there:


    SetColor(15);


      return 0;


      }



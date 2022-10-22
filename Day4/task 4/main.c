#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#define up 72
#define down  80
#define home  71
#define end  79

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


     char str [3][20]={"new ", "display ", "exit"};


     int index;
     for (index=0 ; index <3; index++)
    {
        printf("%s \n", str[index]);

    }

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
         count =3;

     }

     switch(count )
     {
     case 1:
        {

            system("cls");

            SetColor(12);
            printf("%s \n", str[0]);
            SetColor(15);
            printf("%s \n", str [1]);
            printf("%s \n", str[2]);
            if (ch== 13)
            {
                system("cls");
                SetColor(12);
                printf("it is new");
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
            printf("%s \n", str[0]);
            SetColor(12);
            printf("%s \n", str [1]);
            SetColor(15);
            printf("%s \n", str[2]);
            if (ch== 13)
            {
                system("cls");
                SetColor(12);
                printf("it is display");
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
            printf("%s \n", str[0]);
            printf("%s \n", str [1]);
            SetColor(12);
            printf("%s \n", str[2]);
            if (ch== 13)
            {

                goto there;
            }
            else
                break;
            break;



        }






     }


    }
    there:


    SetColor(15);


      return 0;


      }



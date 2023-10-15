#include "data_header.h"

void colour(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void colours(int incolor)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), incolor);
}
void pos(COORD cord)
{
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}
void square_stars(int num, char sym, int color, int incolor, COORD cord)
{
    int i, j;
    for (i = 1; i <= num; i++)
    { 
        pos(cord);
        for (j = 1; j <= num; j++)
        {
            if (i == 1 || i == num || j == 1 || j == num)
            {
                colour(color);
                printf("%c ", sym);
            }
            else
            {
                colours(incolor);
                printf("%c ", sym);
            }
        }
        cord.Y++;
       printf("\n");
    }
    colours(7);
}


void square_hollow(int num, char sym, int color, COORD cord)
{
    int i, j;
    for (i = 1; i <= num; i++)
    {
        pos(cord);
        for (j = 1; j <= num; j++)
        {
            if (i == 1 || i == num || j == 1 || j == num)
            {
                colour(color);
                printf("%c ", sym);
            }
            else

                printf("  ");
        }
        cord.Y++;
        printf("\n");
    }
    colours(7);
}

#include "data_header.h"
void filled_rectangle(int num, char sym, int color, int incolor, COORD cord)
{
    int row, col;
    for (row = 1; row <= num; row++)
    {
        pos(cord);
        for (col = 1; col <= 2 * num; col++)
        {
            if (row == 1 || row == num || col == 1 || col == 2 * num)
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
void hollow_rectangle(int num, char sym, int color, COORD cord)
{
    int row, col;
    for (row = 1; row <= num; row++)
    {
        pos(cord);
        for (col = 1; col <= 2 * num; col++)
            if (row == 1 || row == num || col == 1 || col == 2 * num)
            {
                colour(color);
                printf("%c ", sym);
            }
            else
            {
                printf("  ");
            }
        cord.Y++;
        printf("\n");
    }
    colours(7);
}
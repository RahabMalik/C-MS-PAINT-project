#include "data_header.h"
void parallelogram_hollow(int num, char sym, int color, COORD cord)
{
    int row, col;
    for (row = 1; row <= num; row++)
    {
        pos(cord);
        for (col = 1; col <= (num - row); col++)
        {
            printf("  ");
        }
        for (col = 1; col <= 2 * num; col++)
        {
            if (row == 1 || col == 1 || col == (2 * num) || row == num)
            {
                colour(color);
                printf("%c ", sym);
            }
            else
            {
                printf("  ");
            }
        }
        cord.Y++;
        printf("\n");
    }
    colour(7);
}
void parallelogram_filled(int num, char sym, int incolor, int color, COORD cord)
{
    int row, col;
    for (row = 1; row <= num; row++)
    {
        pos(cord);
        for (col = 1; col <= (num - row); col++)
        {
            printf("  ");
        }
        for (col = 1; col <= 2 * num; col++)
        {
            if (row == 1 || col == 1 || col == (2 * num) || row == num)
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
    colour(7);
}
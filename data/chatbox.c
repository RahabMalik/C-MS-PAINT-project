#include "data_header.h"
void chatbox(int num, char sym, int color, COORD cord)
{
    int row, col;
    for (row = 1; row <= num - 1; row++)
    {
        pos(cord);
        for (col = 1; col <= 2 * num; col++)
            if (row == 1 || row == num - 1 && col >= num - 2 / 2 || col == 1 || col == 2 * num)
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
    for (row = num / 2 - 1; row >= 1; row--)
    {
        pos(cord);
        for (col = 1; col <= num / 2 - row; col++)
            printf("  ");
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            if (col == (2 * row) - 1 || col == 1)
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
    colour(7);
}
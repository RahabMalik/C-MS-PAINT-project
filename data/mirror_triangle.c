#include "data_header.h"
void mirror_triangle_filled(int size, char sym, int color, int incolor, COORD cord)
{
    int row, col;
    for (row = 1; row <= size; row++)
    {
        pos(cord);
        for (col = 1; col <= row; col++)
            if (col == row || row == size || col == 1)
            {
                colour(color);
                printf("%c ", sym);
            }
            else
            {
                colours(incolor);
                printf("%c ", sym);
            }
        for (col = 1; col <= size - row; col++)
        {
            printf("  ");
        }
        cord.Y++;
        printf("\n");
    }
    colour(7);
}

void mirror_triangle_hollow(int size, char sym, int color, COORD cord)
{
    int row, col;
    for (row = 1; row <= size; row++)
    {
        pos(cord);
        for (col = 1; col <= size - row; col++)
            printf("  ");
        for (col = 1; col <= row; col++)
            if (col == row || row == size || col == 1)
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
      colour(7);
}
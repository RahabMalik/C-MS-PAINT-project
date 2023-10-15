#include "data_header.h"
void triangle_hollow(int size, char sym, int color,COORD cord)
{
    int row, col;
    for (row = 1; row <= size; row++)
    {
        pos(cord);
        for (col = 1; col <= row; col++)
            if (col == 1 || row == size || row == col)
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
void triangle_filled(int size, char sym, int color, int incolor,COORD cord)
{
    int row, col;
    for (row = 1; row <= size; row++)
    {
        pos(cord);
        for (col = 1; col <= row; col++)
            if (col == 1 || row == size || row == col)
            {
                colour(color);
                printf("%c ", sym);
            }
            else
            {
                colours(incolor);
                printf("%c ", sym);
            }
        cord.Y++;
         printf("\n");
    }
    colour(7);
}
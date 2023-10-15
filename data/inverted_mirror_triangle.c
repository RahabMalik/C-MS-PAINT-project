#include "data_header.h"
void inverted_mirror_triangle_hollow(int size, char sym, int color, COORD cord)
{
    int row, col;
    for (row = 1; row <= size; row++)
    {
        pos(cord);
        for (col = 1; col <= row - 1; col++)
            printf("  ");
        for (col = 1; col <= (size - row) + 1; col++)
            if (row == 1 || col == (size - row) + 1 || col == 1)
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
void inverted_mirror_triangle_filled(int size, char sym, int color,int incolor, COORD cord)
{
    int row, col;
    for (row = 1; row <= size; row++)
    {
        pos(cord);
        for (col = 1; col <= row - 1; col++)
            printf("  ");
        for (col = 1; col <= (size - row) + 1; col++)
            if (row == 1 || col == (size - row) + 1 || col == 1)
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
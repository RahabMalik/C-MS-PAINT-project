#include "data_header.h"
void inverted_triangle_filled(int num, char sym, int color, int incolor,COORD cord)
{
    int row, col;
    for (row = 1; row <= num; row++)
    {
        pos(cord);
        for (col = 1; col <= (num - row) + 1; col++)

            if (col == 1 || row == 1 || col == (num - row) + 1)
            {
                colour(color);
                printf("%c ", sym);
            }
            else
            {
                colours(incolor);
                printf("%c ", sym);
            }
        for (col = 1; col <= row - 1; col++)
        {
            printf("  ");
        }
        cord.Y++;
        printf("\n");
    }
    colour(7);
}
void inverted_triangle_hollow(int size, char sym, int color,COORD cord)
{
    int row, col;
    for (row = 1; row <= size; row++)
    {
        pos(cord);
        for (col = 1; col <= (size - row) + 1; col++)
            if (col == 1 || row == 1 || col == (size - row) + 1)
            {
                colour(color);
                printf("%c ", sym);
            }
            else
            {
                printf("  ");
            }cord.Y++;
        printf("\n");
    }
    colour(7);
}
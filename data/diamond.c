#include "data_header.h"
void diamond_filled(int num, char sym, int color,int incolor, COORD cord)
{
    int row, col;
    for (row = 1; row <= num; row++)
    {
        pos(cord);
        for (col = 1; col <= (num - row); col++)
            printf("  ");
        for (col = 1; col <= (2 * row) - 1; col++)
        {

            colour(color);
            printf("%c ", sym);
        }
        cord.Y++;
        printf("\n");
    }
    for (row = num - 1; row >= 1; row--)
    {
        pos(cord);
        for (col = 1; col <= (num - row); col++)
            printf("  ");
        for (col = 1; col <= (2 * row) - 1; col++)
        {

            colour(color);
            printf("%c ", sym);
        }
        cord.Y++;
        printf("\n");
    }
    colour(7);
}
void diamond_hollow(int num, char sym, int color, COORD cord)
{
    int row, col;
    // Upper half of the diamond
    for (row = 1; row <= num; row++)
    {
        pos(cord);
        for (col = 1; col <= (num - row); col++)
            printf("  ");
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            if (col == 1 || col == (2 * row) - 1) {
                // Print symbols at the edges of the diamond
                colour(color);
                printf("%c ", sym);
            } else {
                // Print spaces in the middle
                printf("  ");
            }
        }
        cord.Y++;
        printf("\n");
    }
    for (row = num - 1; row >= 1; row--)
    {
        pos(cord);
        for (col = 1; col <= (num - row); col++)
            printf("  ");
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            if (col == 1 || col == (2 * row) - 1) {
                colour(color);
                printf("%c ", sym);
            } else {
                printf("  ");
            }
        }
        cord.Y++;
        printf("\n");
    }
    colour(7);
}

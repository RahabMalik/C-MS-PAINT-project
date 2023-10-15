#include "data_header.h"
void trapezium_filled(int num, char sym, int color, int incolor, COORD cord)
{
    int row, col;
    for (row = num / 2; row <= num; row++)
    {
        pos(cord);
        for (col = 1; col <= (num - row); col++)
            printf("  ");
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            if (row == num || col == 1 || col == (2 * row) - 1 || row == num / 2)
            {
            colour(color);
            printf("%c ",sym);
            }
            else
            {
            colour(incolor);
            printf("%c ",sym);
            }
        }
        cord.Y++;
        printf("\n");
    }
    colour(7);
}
void trapezium_hollow(int num, char sym, int color, COORD cord)
{
    for (int row = num / 2; row <= num; row++)
    {
        pos(cord);
        for (int col = 1; col <= (num - row); col++)
            printf("  ");
        for (int col = 1; col <= (2 * row) - 1; col++)
        {
            if (col == 1 || row == num / 2 || row == num || col == (2 * row) - 1)
            {
                colour(color);
                printf("* ");
            }    
            else
                printf("  ");
        }
        cord.Y++;
        printf("\n");
    }
    colour(7);
}
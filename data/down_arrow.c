#include "data_header.h"
void down_arrow_hollow(int num, char sym, int color, COORD cord)
{
    int row, col;
    for (row = 1; row <= (num / 2); row++)
    {
        pos(cord);
        for (col = 1; col <= (num / 2) - 2; col++)
            printf("  ");
        for (col = 1; col <= 3; col++)
        {
            if (col == 1 || col == 3 || row == 1)
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
    for (row = num / 2; row >= 1; row--)
    {
         pos(cord);
        for (col = 1; col <= num / 2 - row; col++)
            printf("  ");
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            if (col == 1 || col == (2 * row) - 1 || row == num / 2 && col > num / 2 || row == num / 2 && col < num / 2)
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
void down_arrow_filled(int num, char sym, int color, int incolor, COORD cord)
{
    int row, col;
    for (row = 1; row <= (num / 2); row++)
    {
        pos(cord);
        for (col = 1; col <= (num / 2) - 2; col++)
            printf("  ");
        for (col = 1; col <= 3; col++)
        {
            if (col == 1 || col == 3 || row == 1)
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
    for (row = num / 2; row >= 1; row--)
    {
         pos(cord);
        for (col = 1; col <= num / 2 - row; col++)
            printf("  ");
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            if (col == 1 || col == (2 * row) - 1 || row == num / 2 && col > num / 2 || row == num / 2 && col < num / 2)
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

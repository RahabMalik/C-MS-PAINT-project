#include "data_header.h"
void hexagon_hollow(int num, char sym, int color, COORD cord)
{
    for (int row = num / 2 + 1; row <= num; row++)
    {
        pos(cord);
        for (int col = 1; col <= num - row; col++)
        {
            printf("  ");
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            if (col == 1 || row == num / 2 + 1 || col == (2 * row) - 1)
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

    for (int row = num - 1; row >= num / 2 + 1; row--)
    {
        pos(cord);
        for (int col = 1; col <= num - row; col++)
        {
            printf("  ");
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            if (col == 1 || row == num / 2 + 1 || col == (2 * row) - 1)
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
void hexagon_filled(int num, char sym, int color, int incolor, COORD cord)
{
    for (int row = num / 2 + 1; row <= num; row++)
    {
        pos(cord);
        for (int col = 1; col <= num - row; col++)
        {
            printf("  ");
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            if (col == 1 || row == num / 2 + 1 || col == (2 * row) - 1)
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

    for (int row = num - 1; row >= num / 2 + 1; row--)
    {
        pos(cord);
        for (int col = 1; col <= num - row; col++)
        {
            printf("  ");
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            if (col == 1 || row == num / 2 + 1 || col == (2 * row) - 1)
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
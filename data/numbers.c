#include "data_header.h"
void print_number_zero(int num, char sym, int color, COORD cord)
{
    for (int row = 1; row <= num; row++)
    {
        pos(cord);
        for (int col = 1; col <= num; col++)
        {
            if ((row == 1 && col >= 2 && col <= num - 1) ||
                (row == num && col >= 2 && col < num) ||
                (col == 1 && row >= 2 && row <= num - 1) || col == num && row >= 2 && row <= num - 1)
            {
                colour(color);
                printf("%c", sym);
            }
            else
            {
                printf(" ");
            }
        }
        cord.Y++;
        printf("\n");
    }
    colour(7);
}


void print_number_one(int num, char sym, int color, COORD cord)
{
    int row, col;
    for (row = 1; row <= num; row++)
    {
        pos(cord);
        for (col = 1; col <= num; col++)
        {
            if (col == num / 2)
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

void print_number_two(int num, char sym, int color, COORD cord)
{
    for (int row = 1; row <= num; row++)
    {
        pos(cord);
        for (int col = 1; col <= num; col++)
        {
            if (row == 1 || row == (num / 2) || row == num || (col == num && row <= ceil(num / 2)) || (col == 1 && row > num / 2))
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

void print_number_three(int num, int sym, int color, COORD cord)
{
    for (int row = 1; row <= num; row++)
    {
        pos(cord);
        for (int col = 1; col <= (num / 2) + 1; col++)
        {
            if ((num / 2) % 2 == 0)
            {
                if (col == (num / 2) + 1 || row == num || row == 1 || row == num / 2)
                {
                    colour(color);
                    printf("%c ", sym);
                }
                else
                    printf("  ");
            }
            else
            {
                if (col == (num / 2) + 1 || row == num || row == 1 || row == (num / 2))
                    printf("* ");
                else
                    printf("  ");
            }
        }
        cord.Y++;
        printf("\n");
    }
    colour(7);
}

void print_number_four(int num, char sym, int color, COORD cord)
{
    for (int row = 1; row <= (num / 2) + 1; row++)
    {
        pos(cord);
        for (int col = 1; col <= (num / 2) - row; col++)
        {
            printf("  ");
        }
        for (int col = 1; col <= row; col++)
        {
            if (col == row || row == (num / 2) + 1 || col == 1)
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
    
    void print_number_seven(int num, int sym, int color, COORD cord)
    {
        for (int row = 1; row <= num; row++)
        {
            pos(cord);
            for (int col = 1; col <= num - 1; col++)
            {
                if (row == 1 || col == num - row)
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
 
    void print_number_eight(int num, char sym, int color, COORD cord)
    {
        for (int row = 1; row <= num; row++)
        {
            pos(cord);
            for (int col = 1; col <= (num / 2) + 1; col++)
            {
                if ((num / 2) % 2 == 0)
                {
                    if (col == (num / 2) + 1 || row == num || row == 1 || row == num / 2 || col == 1)
                    {
                        colour(color);
                        printf("%c ", sym);
                    }
                    else
                        printf("  ");
                }
                else
                {
                    if (col == (num / 2) + 1 || row == num || row == 1 || row == (num / 2) || col == 1)
                    {
                        colour(color);
                        printf("%c ", sym);
                    }
                    else
                        printf("  ");
                }
            }
            cord.Y++;
            printf("\n");
        }
        colour(7);
    }
    
    void print_number_five(int num, char sym, int color, COORD cord)
    {
        for (int row = 1; row <= num; row++)
        {
            pos(cord);
            for (int col = 1; col <= num; col++)
            {
                if ((row == 1 || row == num / 2 || row == num) &&
                    (col >= 1 && col < num))
                {
                    colour(color);
                    printf("%c ", sym);
                }
                else if ((row > 1 && row < num / 2) && (col == 1))
                {
                    colour(color);
                    printf("%c ", sym);
                }
                else if ((row > num / 2 && row < num) && (col == num))
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
    
    void print_number_six(int num, char sym, int color, COORD cord)
    {
        for (int row = 1; row <= num; row++)
        {
            pos(cord);
            for (int col = 1; col <= (num / 2) + 1; col++)
            {
                if ((num / 2) % 2 == 0)
                {
                    if (col == (num / 2) + 1 && row > num / 2 + 1 || row == num || row == 1 || row == num / 2 + 1 || col == 1)
                    {
                        colour(color);
                        printf("%c ", sym);
                    }
                    else
                        printf("  ");
                }
                else
                {
                    if (col == (num / 2) + 1 && row > num / 2 + 1 || row == num || row == 1 || row == (num / 2) + 1 || col == 1)
                    {
                        colour(color);
                        printf("%c ", sym);
                    }
                    else
                        printf("  ");
                }
            }
            cord.Y++;
            printf("\n");
        }
        colour(7);
    }
    
    void print_number_nine(int num, int sym, int color, COORD cord)
    {
        for (int row = 1; row <= num; row++)
        {
            pos(cord);
            for (int col = 1; col <= (num / 2) + 1; col++)
            {
                if ((num / 2) % 2 == 0)
                {
                    if (col == (num / 2) + 1 || row == num || row == 1 || row == num / 2 || (col == 1 && row < (num / 2) + 1))
                    {
                        colour(color);
                        printf("%c ", sym);
                    }
                    else
                        printf("  ");
                }
                else
                {
                    if (col == (num / 2) + 1 || row == num || row == 1 || row == (num / 2) || (col == 1 && row < (num / 2) + 1))
                        printf("* ");
                    else
                        printf("  ");
                }
            }
            cord.Y++;
            printf("\n");
        }
        colour(7);
    }
     
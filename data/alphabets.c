#include "data_header.h"

void print_A(int num, int sym, int color, COORD cord)
{
    int row, col;

    for (row = 1; row <= num; row++)
    {
        pos(cord);
        for (col = 1; col <= (num - row); col++)
            printf("  ");
        for (col = 1; col <= (2 * row) - 1; col++)
        {

            if (col == (2 * row) - 1 || col == 1 || row == num / 2 + 1)
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

void print_B(int num, int sym, int color, COORD cord)
{
    for (int i = 0; i < num; i++)
    {
        pos(cord);
        for (int j = 0; j <= num / 2; j++)
        {
            if ((j == 0) ||
                ((j == num / 2) && (i != 0 && i != num - 1 && i != num / 2)) ||
                ((i == 0 || i == num - 1 || i == num / 2 - 1) && (j != num / 2)))
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
void print_C(int num, char sym, int color, COORD cord)
{
    for (int row = 1; row <= num; row++)
    {
        pos(cord);
        for (int col = 1; col < num; col++)
        {
            if (row == 1 || row == num || col == 1)
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

void print_D(int num, char sym, int color, COORD cord)
{
    for (int row = 1; row <= num; row++)
    {
        pos(cord);
        for (int col = 1; col <= num; col++)
        {
            if ((row == 1 && col >= 2 && col <= num - 1) ||
                (row == num && col >= 2 && col < num) ||
                col == 1 || col == num && row >= 2 && row <= num - 1)
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

void print_E(int num, char sym, int color, COORD cord)
{
    for (int row = 1; row <= num; row++)
    {
        pos(cord);
        for (int col = 1; col < num; col++)
        {
            if (row == 1 || col == 1 || row == num / 2 || row == num)
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
void print_F(int num, char sym, int color, COORD cord)
{
    for (int row = 1; row <= num; row++)
    {
        pos(cord);
        for (int col = 1; col < num; col++)
        {
            if (row == 1 || col == 1 || row == num / 2)
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
void print_G(int num, int sym, int color, COORD cord)
{
    for (int row = 1; row <= num; row++)
    {
        pos(cord);
        for (int col = 1; col <= num; col++)
        {
            if ((row == 1 && col >= 2 && col <= num - 1) ||
                (row == num && col >= 3) ||
                (col == 1 && row >= 2 && row <= num - 1) ||
                (col == num && row > num / 2) ||
                (row == num / 2 + 1 && col >= num / 2 + 1))
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
void print_H(int num, int sym, int color, COORD cord)
{
    for (int row = 1; row <= num; row++)
    {
        pos(cord);
        for (int col = 1; col <= (num / 2) + 1; col++)
        {
            if ((num / 2) % 2 == 0)
            {
                if (col == (num / 2) + 1 || row == (num / 2) + 1 || col == 1)
                {
                    colour(color);
                    printf("%c ", sym);
                }
                else
                    printf("  ");
            }
            else
            {
                if (col == (num / 2) + 1 || row == (num / 2) || col == 1)
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
void print_I(int num, char sym, int color, COORD cord)
{
    for (int row = 1; row <= num; row++)
    {
        pos(cord);
        for (int col = 1; col <= num; col++)
        {
            if (row == 1 || row == num || col == num / 2 + 1)
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
void print_J(int num, int sym, int color, COORD cord)
{
    for (int row = 0; row < num; row++)
    {
        pos(cord);
        for (int col = 0; col < num; col++)
        {
            if (col == num / 2 || (row == num - 1 && col <= num / 2) || row == 0)
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
void print_K(int num, int sym, int color, COORD cord)
{
    int i, j, k, count = 6;
    for (i = 0; i <= 11; i++)
    {
        pos(cord);
        for (j = 0; j < 2; j++)
        {
            colour(color);
            printf("%c ", sym);
        }
        for (k = 0; k <= 6; k++)
        {
            if (k == count)
            {
                colour(color);
                printf("%c ", sym);
            }
            else
            {
                printf("  ");
            }
        }
        if (i <= 5)
        {
            count--;
        }
        else if (i <= 11)
        {
            count++;
        }
        cord.Y++;
        printf("\n");
    }
    colour(7);
}

void print_L(int num, int sym, int color, COORD cord)
{
    for (int row = 1; row <= num; row++)
    {
        pos(cord);
        for (int col = 1; col <= (num / 2) + 1; col++)
        {
            if ((num / 2) % 2 == 0)
            {
                if (row == num || col == 1)
                {
                    colour(color);
                    printf("%c ", sym);
                }
                else
                    printf("  ");
            }
            else
            {
                if (row == num || col == 1)
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
void print_M(int num, char sym, int color, COORD cord)
{
    int width = (num * 2) - 1;
    int mid = width / 2;

    for (int i = 0; i < num; i++)
    {
        pos(cord);
        for (int j = 0; j < width; j++)
        {
            if (j == 0 || j == width - 1 || ((j == i || j == width - i - 1)))
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
void print_N(int num, char sym, int color, COORD cord)
{
    int row, col;
    for (row = 1; row <= num; row++)
    {
        pos(cord);
        for (col = 1; col <= num; col++)
        {
            if (col == 1 || col == row || col == num)
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
void print_O(int num, char sym, int color, COORD cord)
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

void print_P(int num, char sym, int color, COORD cord)
{
    // declaring variables for loops
    int row, col;
    for (row = 1; row <= num; row++)
    {
        pos(cord);
        for (col = 1; col <= num; col++)
        {
            if (row == 1 || col == 1 || (row <= num / 2 && col == num) || (row == num / 2 + 1))
            {
                colour(color);
                printf("%c ", sym);
            }
            else
            {
                // printing a space
                printf("  ");
            }
        }
        cord.Y++;
        printf("\n");
    }
    colour(7);
}

void print_Q(int num, char sym, int color, COORD cord)
{
    for (int row = 1; row <= num; row++)
    {
        pos(cord);
        for (int col = 1; col <= num; col++)
        {
            if ((row == 1 && col >= 2 && col <= num - 2) ||
                (row == num - 1 && col >= 2 && col < num - 1) ||
                (col == 1 && row >= 2 && row <= num - 2) || col == num - 1 && row >= 2 && row <= num - 1 || row == col && col > num / 2)
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
void print_R(int num, int sym, int color, COORD cord)

{
    int row, col;

    for (row = 1; row <= num; row++)
    {
        pos(cord);
        for (col = 1; col <= num; col++)
        {
            if (col == 1 || row == 1 || row == num / 2 + 1 || (row <= num / 2 && col == num) || (row > num / 2 && col == row))
            {
                colour(color);
                printf("%c", sym); // Print the symbol
            }
            else
            {
                printf(" "); // Print a space
            }
        }
        cord.Y++;
         printf("\n");
    }
    colour(7);
}

void print_S(int num, int sym, int color, COORD cord)
{
    for (int row = 1; row <= num; row++)
    {
        pos(cord);
        for (int col = 1; col <= num; col++)
        {
            if ((row == 1 || row == num / 2 || row == num) &&
                (col > 1 && col < num))
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
void print_T(int num, char sym, int color, COORD cord)
{
    for (int row = 1; row <= num; row++)
    {
        pos(cord);
        for (int col = 1; col <= num; col++)
        {
            if (row == 1 || col == num / 2 + 1)
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
void print_U(int num, int sym, int color, COORD cord)
{
    for (int row = 0; row < num; row++)
    {
        pos(cord);
        for (int col = 0; col <= num / 2; col++)
        {
            if ((col == 0 || col == num / 2) && row != num - 1)
            {
                colour(color);
                printf("%c ", sym);
            }
            else if (row == num - 1 && (col > 0 && col < num / 2))
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
void print_V(int num, int sym, int color, COORD cord)
{
    int row, col;
    for (row = num; row >= 1; row--)
    {
        pos(cord);
        for (col = 1; col <= num - row; col++)
        {
            printf("  ");
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            if (col == 1 || col == 2 * row - 1)
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
void print_W(int num, char sym, int color, COORD cord)
{
    int row, col;
    for (row = 1; row <= num; row++)
    {
        pos(cord);
        for (col = 1; col <= num * 2; col++)
        {
            if (col == 1 || col == num * 2 || (row + col) == (num + 1) || (col - row) == num)
            {
                colour(color);
                printf("%c", sym);
            }
            else
                printf(" ");
        }
        cord.Y++;
        printf("\n");
    }
    colour(7);
}
void print_X(int num, int sym, int color, COORD cord)
{
    int row, col;
    for (row = num / 2; row >= 1; row--)
    {
        pos(cord);
        for (col = 1; col <= num / 2 - row; col++)
        {
            printf("  ");
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            if (col == 1 || col == 2 * row - 1)
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
    for (row = 2; row <= num / 2; row++)
    {
        pos(cord);
        for (col = 1; col <= num / 2 - row; col++)
        {
            printf("  ");
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            if (col == 1 || col == 2 * row - 1)
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
void print_Y(int num, int sym, int color, COORD cord)
{

    for (int row = num / 2; row >= 1; row--)
    {
        pos(cord);

        for (int col = 1; col <= num / 2 - row; col++)
        {
            printf("  ");
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            if (col == 1 || col == 2 * row - 1)
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
    for (int row = 2; row <= num / 2; row++)
    {
        pos(cord);
        // Print leading spaces
        for (int col = 1; col <= num / 2 - row; col++)
        {
            printf("  ");
        }

        // Print asterisks
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            if (col == 1)
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
void print_Z(int num, char sym, int color, COORD cord)
{
    for (int row = 1; row <= num; row++)
    {
        pos(cord);
        for (int col = 1; col <= num; col++)
        {
            if (row == 1 || row == num || row + col == num + 1)
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


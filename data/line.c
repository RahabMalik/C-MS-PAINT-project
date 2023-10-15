#include "data_header.h"

void vertical_line(int num, char sym, int color, COORD cord)
{
    pos(cord);
    cord.Y = 0; // Set the starting column position to 0

    for (int row = 0; row < num; row++) // loop for row
    {
        colour(color);
        printf("%c ", sym);

        cord.Y++; // Move to the next row
    }
    colour(7);
}

void horizontal_line(int num, char sym ,int color, COORD cord)
{
    cord.Y = 0; // Set the starting column position to 0
    cord.X = 0; // Set the starting row position to 0
    pos(cord);

    for (int col = 0; col < num; col++) // loop for columns
    {
        colour(color);
        printf("%c ", sym); // assigning boundary color
    }
    colour(7);
}

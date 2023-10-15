#include "data_header.h"
int gotoxy(int x, int y)
{
    COORD cord;
    cord.X = x;
    cord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
    return 0;
}
void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}


void drawing(int x, int y, int color, char sym)
{
    gotoxy(x, y);
    setColor(color);
    while (1)
    {
        if (_kbhit())
        {
           char character = _getch();

            if (character == 0 || character == 0xE0)
            {
                character = _getch();

                switch (character)
                {
                case 72: // Up arrow
                    if (y > 0)
                    {
                        gotoxy(x, --y);
                    }
                    break;
                case 80: // Down arrow
                    if (y < 24)
                    {
                        gotoxy(x, ++y);
                    }
                    break;
                case 75: // Left arrow
                    if (x > 0)
                    {
                        gotoxy(--x, y);
                    }
                    break;
                case 77: // Right arrow
                    if (x < 79)
                    {
                        gotoxy(++x, y);
                    }
                    break;
                }
            }
            else if (character == ' ' || character == 0 || character == 0xE0)
            {

                setColor(color);
                printf("%c", sym);
                gotoxy(x, y);
            }
            else if (character == 8 || character == 0 || character == 0xE0)
            {
                
                    setColor(color);
                    printf(" ");
                    gotoxy(x, y);
                
            }
        }
    }
}



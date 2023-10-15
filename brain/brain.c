#include "brain_header.h"
void square_functions(int num, int type, int color, int incolor, char sym, COORD cord)
{
     if (type == 1)
     {
          square_stars(num, sym, color, incolor, cord);
     }
     else if (type == 2)
     {
          square_hollow(num, sym, color, cord);
     }
     else
          printf("Enter right choice:");
}

void rectangle_functions(int num, int type, int color, int incolor, char sym, COORD cord)
{
     if (type == 1)
     {
          filled_rectangle(num, sym, color, incolor, cord);
     }
     else if (type == 2)
     {
          hollow_rectangle(num, sym, color, cord);
     }
     else
          printf("Enter right choice:");
}
void parallelogram_functions(int num, int type, int color, int incolor, char sym, COORD cord)
{
     if (type == 1)
     {
          parallelogram_filled(num, sym, color, incolor, cord);
     }
     else if (type == 2)
     {
          parallelogram_hollow(num, sym, color, cord);
     }
     else
          printf("Enter right choice:");
}
void trapezium_functions(int num, int type, int color, int incolor, char sym, COORD cord)
{
     if (type == 1)
     {
          trapezium_filled(num, sym, color, incolor, cord);
     }
     else if (type == 2)
     {
          trapezium_hollow(num, sym, color, cord);
     }
     else
          printf("Enter right choice:");
}
void diamond_functions(int num, int type, int color, int incolor, char sym, COORD cord)
{
     if (type == 1)
     {
          diamond_filled(num, sym, color, incolor, cord);
     }
     else if (type == 2)
     {
          diamond_hollow(num, sym, color, cord);
     }
     else
          printf("Enter right choice:");
}
void hexagon_functions(int num, int type, int color, int incolor, char sym, COORD cord)
{
     if (type == 1)
     {
          hexagon_filled(num, sym, color, incolor, cord);
     }
     else if (type == 2)
     {
          hexagon_hollow(num, sym, color, cord);
     }
     else
          printf("Enter right choice:");
}
void pentagon_functions(int num, int type, int color, int incolor, char sym, COORD cord)
{
     if (type == 1)
     {
          pentagon_filled(num, sym, color, incolor, cord);
     }
     else if (type == 2)
     {
          pentagon_hollow(num, sym, color, cord);
     }
     else
          printf("Enter right choice:");
}
void line_functions(int num, int type, int color, char sym, COORD cord)
{
     if (type == 1)
     {
          vertical_line(num, sym, color, cord);
     }
     else if (type == 2)
     {
          horizontal_line(num, sym, color, cord);
     }
     else
          printf("Enter right choice:");
}
void mirror_triangle_functions(int num, int type, int color, int incolor, char sym, COORD cord)
{
     if (type == 1)
     {
          mirror_triangle_filled(num, sym, color, incolor, cord);
     }
     else if (type == 2)
     {
          mirror_triangle_hollow(num, sym, color, cord);
     }
     else
          printf("Enter right choice:");
}
void inverted_mirror_triangle_functions(int num, int type, int color, int incolor, char sym, COORD cord)
{
     if (type == 1)
     {
          inverted_mirror_triangle_filled(num, sym, color, incolor, cord);
     }
     else if (type == 2)
     {
          inverted_mirror_triangle_hollow(num, sym, color, cord);
     }
     else
          printf("Enter right choice:");
}
void inverted_triangle_functions(int num, int type, int color, int incolor, char sym, COORD cord)
{
     if (type == 1)
     {
          inverted_triangle_filled(num, sym, color, incolor, cord);
     }
     else if (type == 2)
     {
          inverted_triangle_hollow(num, sym, color, cord);
     }
     else
          printf("Enter right choice:");
}
void simple_triangle_functions(int num, int type, int color, int incolor, char sym, COORD cord)
{
     if (type == 1)
     {
          triangle_filled(num, sym, color, incolor, cord);
     }
     else if (type == 2)
     {
          triangle_hollow(num, sym, color, cord);
     }
     else
          printf("Enter right choice:");
}
void up_arrow_functions(int num, int type, int color, int incolor, char sym, COORD cord)
{
     if (type == 1)
     {
          up_arrow_filled(num, sym, color, incolor, cord);
     }
     else if (type == 2)
     {
          up_arrow_hollow(num, sym, color, cord);
     }
     else
          printf("Enter right choice:");
}
void down_arrow_functions(int num, int type, int color, int incolor, char sym, COORD cord)
{
     if (type == 1)
     {
          down_arrow_filled(num, sym, color, incolor, cord);
     }
     else if (type == 2)
     {
          down_arrow_hollow(num, sym, color, cord);
     }
     else
          printf("Enter right choice:");
}
void numbers_functions(int num, int type, int color, char sym, COORD cord)
{

     if (type == 0)
     {
          print_number_zero(num, sym, color, cord);
     }
     else if (type == 1)
     {
          print_number_one(num, sym, color, cord);
     }
     else if (type == 2)
     {
          print_number_two(num, sym, color, cord);
     }
     else if (type == 3)
     {
          print_number_three(num, sym, color, cord);
     }
     else if (type == 4)
     {
          print_number_four(num, sym, color, cord);
     }
     else if (type == 5)
     {
          print_number_five(num, sym, color, cord);
     }
     else if (type == 6)
     {
          print_number_six(num, sym, color, cord);
     }
     else if (type == 7)
     {
          print_number_seven(num, sym, color, cord);
     }

     else if (type == 8)
     {
          print_number_eight(num, sym, color, cord);
     }
     else if (type == 9)
     {

          print_number_nine(num, sym, color, cord);
     }
     else
          printf("Enter correct number");
}

void alphabets_functions(int num, int type, int color, char sym, COORD cord)
{
     switch (type)
     {
     case 1:
          print_A(num, sym, color, cord);
          break;
     case 2:
          print_B(num, sym, color, cord);
          break;
     case 3:
          print_C(num, sym, color, cord);
          break;
     case 4:
          print_D(num, sym, color, cord);
          break;
     case 5:
          print_E(num, sym, color, cord);
          break;
     case 6:
          print_F(num, sym, color, cord);
          break;
     case 7:
          print_G(num, sym, color, cord);
          break;
     case 8:
          print_H(num, sym, color, cord);
          break;
     case 9:
          print_I(num, sym, color, cord);
          break;
     case 10:
          print_J(num, sym, color, cord);
          break;
     case 11:
          print_K(num, sym, color, cord);
          break;
     case 12:
          print_L(num, sym, color, cord);
          break;
     case 14:
          print_N(num, sym, color, cord);
          break;
     case 15:
          print_O(num, sym, color, cord);
          break;
     case 16:
          print_P(num, sym, color, cord);
          break;
     case 17:
          print_Q(num, sym, color, cord);
          break;
     case 18:
          print_R(num, sym, color, cord);
          break;
     case 19:
          print_S(num, sym, color, cord);
          break;
     case 20:
          print_T(num, sym, color, cord);
          break;
     case 21:
          print_U(num, sym, color, cord);
          break;
     case 22:
          print_V(num, sym, color, cord);
          break;
     case 23:
          print_W(num, sym, color, cord);
          break;
     case 24:
          print_X(num, sym, color, cord);
          break;
     case 25:
          print_Y(num, sym, color, cord);
          break;
     case 26:
          print_Z(num, sym, color, cord);
          break;
     default:
          printf("enter right choice");
          break;
     }
}

void chatbox(int num, char sym, int color, COORD cord);
     
void drawing(int x, int y, int color, char sym);

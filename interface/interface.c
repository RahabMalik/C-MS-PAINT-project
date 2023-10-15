#include "interface_header.h"
struct Shape
{
    int size;
    int Type;
    char sym;
    int Color;
    int Incolor;
    int x;
    int y;
    char name;
};
void print_welcome_note()
{
    printf("                  **************************************************\n");
    printf("                  *                                                *\n");
    printf("                  *              Welcome to MS PAINT               *\n");
    printf("                  *                                                *\n");
    printf("                  **************************************************\n");
}
void save_struct_to_file(struct Shape shape, const char *folderpath, const char *filename)
{
    char filepath[512];
    // Combine folder path and filename to create the full file path
    snprintf(filepath, sizeof(filepath), "%s/%s", folderpath, filename);

    FILE *file = fopen(filepath, "w");

    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }

    // Write the struct data to the file
    fprintf(file, "Section: %c,Input :%d,Size: %d, Symbol: %c, Color: %d, Incolor: %d, X: %d, Y: %d\n",
            shape.name, shape.Type, shape.size, shape.sym, shape.Color, shape.Incolor, shape.x, shape.y);

    // Close the file
    fclose(file);
    printf("Data has been written to the file '%s'.\n", filename);
}
void geometrical_interface()
{
    int num, color, incolor, press, type;
    ;
    char ch, sym;
    COORD cord;
    cord.X;
    cord.Y;
    printf("Enter  shape \n1 for square \n2 for rectangle \n3 for parallelogram\n4 for trapezium\n5 for diamond\n6 for hexagon\n7 for pentagon\n8 for line\n9 for simple triangle\n10 for up inverted triangle\n11 for mirror triangle\n12 for inverted mirror triangle \n13 for up arrow\n14 for down arrow\n15 for chatbox:");
    scanf("%d", &press);
    printf("Enter type of shape \n1 for filled \n2 for hollow :");
    scanf("%d", &type);
    printf("enter X-axis position");
    scanf("%d", &cord.X);
    printf("enter Y-axis position");
    scanf("%d", &cord.Y);
    printf("Enter size of shape :");
    scanf("%d", &num);

    printf("Enter symbol for shape:");
    scanf(" %c", &sym);
    printf("Enter colour for outer fill:\n0 for black,1 for blue,2 for green, 3 for cyan, 4 for red , 5 for magenta ,6 for yellow, 7 for white");
    scanf("%d", &color);
    printf("Enter colour for inner fill:\n0 for black,1 for blue,2 for green, 3 for cyan, 4 for red , 5 for magenta ,6 for yellow, 7 for white");
    scanf("%d", &incolor);
    system("cls");
    if (press == 1)
    {
        square_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 2)
    {
        rectangle_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 3)
    {
        parallelogram_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 4)
    {
        trapezium_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 5)
    {
        diamond_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 6)
    {
        hexagon_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 7)
    {
        pentagon_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 8)
    {
        line_functions(num, type, color, sym, cord);
    }
    else if (press == 9)
    {
        simple_triangle_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 13)
    {
        up_arrow_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 11)
    {
        mirror_triangle_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 12)
    {
        inverted_mirror_triangle_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 10)
    {
        inverted_triangle_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 14)
    {
        down_arrow_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 15)
    {
        chatbox(num, color, sym, cord);
    }
    else
        printf("Enter right option:");
    int option;
    do
    {
        printf("Enter -1 to return to the main menu:\nEnter 10 to exit the program:\n");

        scanf(" %d", &option);
        if (option == -1)
        {
            main_menu(); // Return to the main menu
        }
        else if (option == 10)
        {
            exit(0); // Exit the program
        }
    } while (option != 10);
}
void geometrical_interface_save()
{
    int num, color, incolor, press, type;
    char ch, sym, name;
    COORD cord;
    cord.X;
    cord.Y;
    printf("Enter  shape \n1 for square \n2 for rectangle\n3 for parallelogram\n4 for trapezium\n5 for diamond\n6 for hexagon\n7 for pentagon\n8 for line\n9 for simple triangle\n10 for up inverted triangle\n11 for mirror triangle\n12 for inverted mirror triangle \n13 for up arrow\n14 for down arrow\n15 for chatbox:");
    scanf("%d", &press);
    printf("Enter type of shape \n1 for filled \n2 for hollow :");
    scanf("%d", &type);
    printf("enter X-axis position");
    scanf("%d", &cord.X);
    printf("enter Y-axis position");
    scanf("%d", &cord.Y);
    printf("Enter size of shape :");
    scanf("%d", &num);
    printf("Enter symbol for shape:");
    scanf(" %c", &sym);
    printf("Enter colour for outer fill:\n0 for black,1 for blue,2 for green, 3 for cyan, 4 for red , 5 for magenta ,6 for yellow, 7 for white");
    scanf("%d", &color);
    printf("Enter colour for inner fill:\n0 for black,1 for blue,2 for green, 3 for cyan, 4 for red , 5 for magenta ,6 for yellow, 7 for white");
    scanf("%d", &incolor);
    system("cls");
    struct Shape shape;
    shape.name = 'G';
    shape.Type = press;
    shape.size = num;
    shape.sym = sym;
    shape.Color = color;
    shape.Incolor = incolor;
    shape.x = cord.X;
    shape.y = cord.Y;
    if (press == 1)
    {
        square_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 2)
    {
        rectangle_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 3)
    {
        parallelogram_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 4)
    {
        trapezium_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 5)
    {
        diamond_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 6)
    {
        hexagon_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 7)
    {
        pentagon_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 8)
    {
        line_functions(num, type, color, sym, cord);
    }
    else if (press == 9)
    {
        simple_triangle_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 13)
    {
        up_arrow_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 11)
    {
        mirror_triangle_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 12)
    {
        inverted_mirror_triangle_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 10)
    {
        inverted_triangle_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 14)
    {
        down_arrow_functions(num, type, color, incolor, sym, cord);
    }
    else if (press == 15)
    {
        chatbox(num, color, sym, cord);
    }
    else
        printf("Enter right option:");
    struct Shape;
    char filename[256];
    char folderpath[256];
    printf("Enter the folder path: ");
    scanf("%255s", folderpath);
    printf("Enter the name of the file: ");
    scanf("%255s", filename);
    system("cls");
    save_struct_to_file(shape, folderpath, filename);

    int option;
    do
    {
        printf("Enter -1 to return to the main menu:\nEnter 10 to exit the program:\n");

        scanf(" %d", &option);
        if (option == -1)
        {
            main_menu(); // Return to the main menu
        }
        else if (option == 10)
        {
            exit(0); // Exit the program
        }
    } while (option != 10);
}

void numbers_interface()
{
    int num, color, incolor, type;
    char ch, sym;
    COORD cord;
    cord.X;
    cord.Y;
    printf("Enter a number :");
    scanf("%d", &type);
    printf("enter X-axis position");
    scanf("%d", &cord.X);
    printf("enter Y-axis position");
    scanf("%d", &cord.Y);
    printf("Enter size of shape:");
    scanf("%d", &num);
    printf("Enter symbol for shape:");
    scanf(" %c", &sym);
    printf("Enter colour for outer fill:\n0 for black,1 for blue,2 for green, 3 for cyan, 4 for red , 5 for magenta ,6 for yellow, 7 for white");
    scanf("%d", &color);
    system("cls");
    numbers_functions(num, type, color, sym, cord);

    int option;
    do
    {
        printf("Enter -1 to return to the main menu:\nEnter 10 to exit the program:\n");

        scanf(" %d", &option);
        if (option == -1)
        {
            main_menu(); // Return to the main menu
        }
        else if (option == 10)
        {
            exit(0); // Exit the program
        }
    } while (option != 10);
}
void numbers_interface_save()
{
    int num, color, incolor = 00, type;
    char ch, sym, name;
    COORD cord;
    cord.X;
    cord.Y;
    printf("Enter a number:");
    scanf("%d", &type);
    printf("enter X-axis position");
    scanf("%d", &cord.X);
    printf("enter Y-axis position");
    scanf("%d", &cord.Y);
    printf("Enter size of number :");
    scanf("%d", &num);
    printf("Enter symbol for shape:");
    scanf(" %c", &sym);
    printf("Enter colour for outer fill:\n0 for black,1 for blue,2 for green, 3 for cyan, 4 for red , 5 for magenta ,6 for yellow, 7 for white");
    scanf("%d", &color);
    system("cls");
    struct Shape shape;
    shape.name = 'N';
    shape.Type = type;
    shape.size = num;
    shape.sym = sym;
    shape.Incolor = incolor;
    shape.Color = color;
    shape.x = cord.X;
    shape.y = cord.Y;
    numbers_functions(num, type, color, sym, cord);
    struct Shape;
    char filename[256];
    char folderpath[256];
    printf("Enter the folder path: ");
    scanf("%255s", folderpath);
    printf("Enter the name of the file: ");
    scanf("%255s", filename);
    system("cls");
    save_struct_to_file(shape, folderpath, filename);
    int option;
    do
    {
        printf("Enter -1 to return to the main menu:\nEnter 10 to exit the program:\n");

        scanf("%d", &option);
        if (option == -1)
        {
            main_menu(); // Return to the main menu
        }
        else if (option == 10)
        {
            exit(0); // Exit the program
        }
    } while ((option != 10));
}
void alphabets_interface()
{
    int num, color, incolor, type;
    char ch, sym;
    COORD cord;
    cord.X;
    cord.Y;
    printf("Enter an alphabet\n1 for A\n2 for B\n3 for C\n4 for D\5 for E\n6 for F\n7 for G\n8 for H");
    printf("\n9 for I\n10 for J\n11 for K\n12for L\n13 for M\n14 for N\n15 for O\n16 for P\n17 for Q:");
    printf("\n18 for R\n19 for S\n20 for T\n21for U\n22 for V\n23 for W\n24 for X\n25 for Y\n26 for Z:");
    scanf("%d", &type);
    printf("enter X-axis position");
    scanf("%d", &cord.X);
    printf("enter Y-axis position");
    scanf("%d", &cord.Y);
    printf("Enter size of an alphabet :");
    scanf("%d", &num);
    printf("Enter symbol for shape:");
    scanf(" %c", &sym);
    printf("Enter colour for outer fill:\n0 for black,1 for blue,2 for green, 3 for cyan, 4 for red , 5 for magenta ,6 for yellow, 7 for white");
    scanf("%d", &color);
    system("cls");
    alphabets_functions(num, type, color, sym, cord);

    int option;
    do
    {
        printf("Enter -1 to return to the main menu:\nEnter 10 to exit the program:\n");

        scanf(" %d", &option);
        if (option == -1)
        {
            main_menu(); // Return to the main menu
        }
        else if (option == 10)
        {
            exit(0); // Exit the program
        }
    } while (option != 10);
}
void alphabets_interface_save()
{

    int num, color, incolor = 00, type;
    char ch, sym;
    COORD cord;
    cord.X;
    cord.Y;
    printf("Enter an alphabet\n1 for A\n2 for B\n3 for C\n4 for D\n5 for E\n6 for F\n7 for G\n8 for H");
    printf("\n9 for I\n10 for J\n11 for K\n12for L\n13 for M\n14 for N\n15 for O\n16 for P\n17 for Q");
    printf("\n18 for R\n19 for S\n20 for T\n21for U\n22 for V\n23 for W\n24 for X\n25 for Y\n26 for Z:");
    scanf("%d", &type);
    printf("enter X-axis position");
    scanf("%d", &cord.X);
    printf("enter Y-axis position");
    scanf("%d", &cord.Y);
    printf("Enter size of alphabet :");
    scanf("%d", &num);
    printf("Enter symbol for shape:");
    scanf(" %c", &sym);
    printf("Enter colour for outer fill:\n0 for black,1 for blue,2 for green, 3 for cyan, 4 for red , 5 for magenta ,6 for yellow, 7 for white");
    scanf("%d", &color);
    system("cls");
    struct Shape shape;
    shape.name = 'A';
    shape.Type = type;
    shape.size = num;
    shape.sym = sym;
    shape.Incolor = incolor;
    shape.Color = color;
    shape.x = cord.X;
    shape.y = cord.Y;
    alphabets_functions(num, type, color, sym, cord);
    struct Shape;
    char filename[256];
    char folderpath[256];
    printf("Enter the folder path: ");
    scanf("%255s", folderpath);
    printf("Enter the name of the file: ");
    scanf("%255s", filename);
    system("cls");
    save_struct_to_file(shape, folderpath, filename);
    int option;
    do
    {
        printf("Enter -1 to return to the main menu:\nEnter 10 to exit the program:\n");

        scanf("%d", &option);
        if (option == -1)
        {
            main_menu(); // Return to the main menu
        }
        else if (option == 10)
        {
            exit(0); // Exit the program
        }
    } while ((option != 10));
}
void shapes()
{
    int option;

    printf("Enter 1 for numbers\nEnter 2 for geometrical shapes:\nEnter 3 for alphabets:");
    scanf("%d", &option);
    if (option == 1)
    {
        numbers_interface();
    }
    else if (option == 2)
    {
        geometrical_interface();
    }
    else if (option == 3)
    {
        alphabets_interface();
    }
}
void drawing_interface()
{

    int color, x = 0, y = 0;
    char sym, character;
    printf("Enter color\n0 for black\n1 for blue\n2 for green\n3 for cyan\n4 for red\n5 for magenta\n6 for yellow\n7 for white:");
    scanf("%d", &color);
    printf("Enter symbol:");
    scanf(" %c", &sym);
    system("cls");
    drawing(x, y, color, sym);
    int option;
    do

    {
        printf("Enter -1 to return to the main menu:\nEnter 10 to exit the program:\n");
        scanf("%d", &option);

        if (option == -1)
        {
            main_menu(); // Return to the main menu
        }
        else if (option == 10)
        {
            exit(0); // Exit the program
        }
    } while (option != 10);
}
bool file_exists(const char folder_path[], const char file_name[])
{
    char filepath[512]; // Assuming the combined path won't exceed 512 characters

    // Combine folder path and filename to create the full file path
    snprintf(filepath, sizeof(filepath), "%s/%s", folder_path, file_name);

    // Open the file for reading ("r" mode)
    FILE *file = fopen(filepath, "r");

    if (file == NULL)
    {
        return false; // File does not exist
    }
    else
    {
        fclose(file); // Close the file if it exists
        return true;  // File exists
    }
}
void save_shapes()
{
    int select;
    printf("Enter 1 for geometrical shape:\nEnter 2 for numbers:\nEnter 3 for alphabet:");
    scanf("%d", &select);
    if (select == 1)
    {
        geometrical_interface_save();
    }
    else if (select == 2)
    {
        numbers_interface_save();
    }
    else
    {
        alphabets_interface_save();
    }
}
void option_4()
{
    char folderpath[256];
    char filename[256];
    char filepath[512];

    printf("Enter the folder path: ");
    scanf("%255s", folderpath);

    printf("Enter the name of the file: ");
    scanf("%255s", filename);

    if (file_exists(folderpath, filename))
    {
        FILE *file = fopen(filepath, "r");
        printf("The file '%s/%s' exists.\n", folderpath, filename);
    }
    else
    {
        printf("The file '%s/%s' does not exist.\n", folderpath, filename);
    }
    int option;
    do
    {
        printf("Enter -1 to return to the main menu:\nEnter 10 to exit the program:\n");
        scanf("%d", &option);

        if (option == -1)
        {
            main_menu(); // Return to the main menu
        }
        else if (option == 10)
        {
            exit(0); // Exit the program
        }
    } while (option != 10);
}

void option_5()
{
    char folderpath[256];
    char filename[256];

    printf("Enter the folder path: ");
    scanf("%255s", folderpath);

    printf("Enter the name of the file: ");
    scanf("%255s", filename);
    if (!file_exists(folderpath, filename))
    {
        printf("The file '%s/%s' does not exist. Please enter a valid file and folder name.\n", folderpath, filename);
        printf("Enter the folder path: ");
        scanf("%255s", folderpath);

        printf("Enter the name of the file: ");
        scanf("%255s", filename);

        if (!file_exists(folderpath, filename))
        {
            printf("The file still does not exist. Exiting to the main menu.\n");
            main_menu(); // Return to the main menu
        }
    }

    struct Shape shape;

    // Input data for the struct
    printf("Enter Section:\nA for alphabet \nN for numbers \nG for geometrical shape: ");
    scanf(" %c", &shape.name);
    printf("Enter number of shape: ");
    scanf("%d", &shape.Type);
    printf("Enter size of shape: ");
    scanf("%d", &shape.size);

    printf("Enter symbol for shape: ");
    scanf(" %c", &shape.sym);
    printf("Enter colour for outer fill:\n0 for black,1 for blue,2 for green, 3 for cyan, 4 for red , 5 for magenta ,6 for yellow, 7 for white: ");
    scanf("%d", &shape.Color);

    printf("Enter colour for outer fill:\n0 for black,1 for blue,2 for green, 3 for cyan, 4 for red , 5 for magenta ,6 for yellow, 7 for white ");
    scanf("%d", &shape.Incolor);

    printf("Enter X-axis position: ");
    scanf("%d", &shape.x);

    printf("Enter Y-axis position: ");
    scanf("%d", &shape.y);

    // Save the struct to the file
    save_struct_to_file(shape, folderpath, filename);
    int option;
    do
    {
        printf("Enter -1 to return to the main menu:\nEnter 10 to exit the program:\n");

        scanf("%d", &option);
        if (option == -1)
        {
            return; // Return to the main menu
        }
        else if (option == 10)
        {
            exit(0); // Exit the program
        }
    } while (option != 10);
}

int main_menu()
{
    print_welcome_note();
    printf("Press any key to continue...");
    _getch(); // Use _getch() on Windows
    system("cls");
    int select;
    printf("Enter 1 for shapes\nEnter 2 for free hand drawing:\nEnter 3 for saving shapes:\nEnter 4 for view existing file:\nEnter 5 for edit existing file:");
    scanf("%d", &select);
    if (select == 1)
    {
        shapes();
    }
    else if (select == 2)
    {
        drawing_interface();
    }
    else if (select == 3)
    {
        save_shapes();
    }
    else if (select == 4)
    {
        option_4();
    }
    else if (select == 5)
    {
        option_5();
    }
    return 0;
}

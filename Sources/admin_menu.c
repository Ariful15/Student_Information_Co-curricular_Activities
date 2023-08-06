#include "../headers/admin_menu.h"
#include "../headers/admin_function.h"

void admin_menu()
{
    int choice;

    while (1)
    {
        print_B2n(103);
        print_blank_border(3);
        print_centered_bordered("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Admin  Menu \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        print_blank_border(2);
        print_B2(2);
        print_centered("\xDB\xDB\xDB\xDB\xB2 1. Add student information", 34, 33);
        print_B2n(2);
        print_blank_border(1);
        print_B2(2);
        print_centered("\xDB\xDB\xDB\xDB\xB2 2. Go back to the main menu", 34, 32);
        print_B2n(2);
        print_blank_border(3);
        print_B2n(103);

        printf("\n\n");

        print_centered("Enter your choice: ", 41, 0);
        scanf("%d", &choice);

        printf("\n\n");

        switch (choice)
        {
        case 1:
            add_student_information();
            break;
        case 2:
            print_timer("Returning to the main menu in", 31, 0, 3);
            fflush(stdin);
            system("cls");
            return;
        default:
            print_centered("Invalid choice!, Try again", 36, 0);
            usleep(1000000);
            system("cls");
            break;
        }
    }
}

#include "../headers/main_menu.h"

void main_menu()
{
    printf("\n");

    int choice;

    while (1)
    {
        print_B2n(103);
        print_centered_bordered("                                                                                         ");
        print_centered_bordered("                                                                                         ");
        print_centered_bordered("                                                                                         ");
        print_centered_bordered("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Main Menu \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        print_centered_bordered("                                                                                         ");
        print_centered_bordered("                                                                                         ");
        print_B2(2);
        print_centered("\xDB\xDB\xDB\xDB\xB2 1. Log in as admin", 36, 39);
        print_B2n(2);
        print_centered_bordered("                                                                                         ");
        print_B2(2);
        print_centered("\xDB\xDB\xDB\xDB\xB2 2. Log in as user", 36, 40);
        print_B2n(2);
        print_centered_bordered("                                                                                         ");
        print_B2(2);
        print_centered("\xDB\xDB\xDB\xDB\xB2 3. Exit", 36, 50);
        print_B2n(2);
        print_centered_bordered("                                                                                         ");
        print_centered_bordered("                                                                                         ");
        print_centered_bordered("                                                                                         ");
        print_B2n(103);

        printf("\n");
        printf("\n");

        print_centered("Enter your choice: ", 41, 0);
        scanf("%d", &choice);

        printf("\n");
        printf("\n");

        break;
    }
}

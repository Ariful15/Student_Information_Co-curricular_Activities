#include "../headers/user_menu.h"
#include "../headers/user_function.h"

void user_menu()
{
    int choice;

    while (1)
    {
        system("cls");
        print_B2n(103);
        print_blank_border(3);
        print_centered_bordered("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 User Menu \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        print_blank_border(2);
        print_B2(2);
        print_centered("\xDB\xDB\xDB\xDB\xB2 1. Search Student by ID", 34, 36);
        print_B2n(2);
        print_blank_border(1);
        print_B2(2);
        print_centered("\xDB\xDB\xDB\xDB\xB2 2. Search Student by Name", 34, 34);
        print_B2n(2);
        print_blank_border(1);
        print_B2(2);
        print_centered("\xDB\xDB\xDB\xDB\xB2 3. See All Students Info", 34, 35);
        print_B2n(2);
        print_blank_border(1);
        print_B2(2);
        print_centered("\xDB\xDB\xDB\xDB\xB2 4. See Batchwise Skills ", 34, 35);
        print_B2n(2);
        print_blank_border(1);
        print_B2(2);
        print_centered("\xDB\xDB\xDB\xDB\xB2 5. Back to Main Menu    ", 34, 35);
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
            search_student_by_id();
            break;
        case 2:
            search_student_by_name();
            break;
        case 3:
            view_student_information();
            break;
        case 4:
            see_batchwise_skills();
            break;
        case 5:
            print_timer("Returning to the main menu in", 31, 0, 3);
            fflush(stdin);
            system("cls");
            return;
        default:
            print_centered("Invalid choice! Try again", 36, 0);
            usleep(1000000);
            system("cls");
            break;
        }
    }
}

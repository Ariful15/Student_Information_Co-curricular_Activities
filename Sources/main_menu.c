#include "../headers/main_menu.h"

void main_menu()
{
    printf("\n");

    int choice;

    while (1)
    {
        print_B2n(103);
        print_blank_border(3);
        print_centered_bordered("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Main Menu \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        print_blank_border(2);
        print_B2(2);
        print_centered("\xDB\xDB\xDB\xDB\xB2 1. Log in as admin", 36, 39);
        print_B2n(2);
        print_blank_border(1);
        print_B2(2);
        print_centered("\xDB\xDB\xDB\xDB\xB2 2. Log in as user", 36, 40);
        print_B2n(2);
        print_blank_border(1);
        print_B2(2);
        print_centered("\xDB\xDB\xDB\xDB\xB2 3. Exit", 36, 50);
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
        {
            print_centered("Entering Admin Verification Menu in 3 seconds\r", 29, 0);
            fflush(stdout);
            usleep(1000000);
            print_centered("Entering Admin Verification Menu in 2 seconds\r", 29, 0);
            fflush(stdout);
            usleep(1000000);
            print_centered("Entering Admin Verification Menu in 1 second ", 29, 0);
            usleep(1000000);

            system("cls");

            int count = 0;

            while (1)
            {

                if (log_in_as_admin())
                {
                    print_centered("Log in as admin successful!", 29, 0);
                    printf("\n\n");
                    usleep(1000000);

                    print_centered("Entering Admin Menu in 3 seconds\r", 29, 0);
                    fflush(stdout);
                    usleep(1000000);
                    print_centered("Entering Admin Menu in 2 seconds\r", 29, 0);
                    fflush(stdout);
                    usleep(1000000);
                    print_centered("Entering Admin Menu in 1 second ", 29, 0);
                    usleep(1000000);

                    system("cls");
                    // admin_menu();
                    break;
                }
                else
                {
                    count++;
                    if (count == 1)
                    {
                        system("cls");

                        printf("\n\n\n");
                        print_centered("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 You have entered the wrong admin ID or password 3 times \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n", 15, 0);
                        printf("\n\n\n");
                        print_centered("Please try again later\n", 39, 0);

                        print_centered("Going back to Main Menu in 3 seconds\r", 32, 0);
                        fflush(stdout);
                        usleep(1000000);
                        print_centered("Going back to Main Menu in 2 seconds\r", 32, 0);
                        fflush(stdout);
                        usleep(1000000);
                        print_centered("Going back to Main Menu in 1 second ", 32, 0);
                        usleep(1000000);

                        system("cls");

                        break;
                    }

                    system("cls");

                    printf("\n\n\n");
                    print_centered("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Wrong admin ID or password. Please try again \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2", 21, 20);
                    usleep(1000000);

                    system("cls");
                }
            }
            break;
        }
        case 3:
        {
            printf("\nGoodbye!\n");
            exit(0);
        }
        default:
        {
            printf("\nInvalid choice. Please try again.\n");
            usleep(1000000);
            break;
        }

            /*
            case 2:
                while (1)
                {
                    if(log_in_as_user())
                    {
                        printf(("\n\n\nLog in as user successfully!"));
                        usleep(1000000);
                        system("cls");
                        printf("\n\t\tWelcome, user!\n");
                        usleep(1000000);
                        system("cls");
                        //user_menu();
                        break;
                    }
                    else
                    {
                        printf("\nInvalid user ID or full name. Please try again.\n");
                        usleep(1000000);
                        system("cls");
                    }
                }
                break;

            } */
        }
    }
}

#include "../headers/login_management.h"

bool log_in_as_admin(void)
{
    print_B2n(103);
    print_blank_border(3);
    print_centered_bordered("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Admin  Verification \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    print_blank_border(3);
    print_B2n(103);

    char admin_id[50];
    char admin_pass[50];

    printf("\n\n");

    print_centered("Enter your admin ID: ", 33, 0);
    scanf("%s", admin_id);

    print_centered("Enter your admin password: ", 33, 0);
    scanf("%s", admin_pass);

    FILE *admin_file = fopen("files/admin.csv", "r");
    if (admin_file == NULL)
    {
        printf("\nError: Could not open the admin.csv file.\n");
        return false;
    }

    char line[100];
    char *id_token, *pass_token;
    while (fgets(line, sizeof(line), admin_file) != NULL)
    {
        id_token = strtok(line, ",");
        pass_token = strtok(NULL, ",");
        pass_token[strcspn(pass_token, "\n")] = '\0';

        if (strcmp(id_token, admin_id) == 0 && strcmp(pass_token, admin_pass) == 0)
        {
            fclose(admin_file);
            return true;
        }
    }

    fclose(admin_file);

    return false;
}

bool log_in_as_user(void)
{
    print_B2n(103);
    print_blank_border(3);
    print_centered_bordered("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 User Verification \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    print_blank_border(3);
    print_B2n(103);

    char user_id[50];
    char user_full_name[100];

    printf("\n\n");

    print_centered("Enter your user ID: ", 33, 0);
    scanf("%s", user_id);

    print_centered("Enter your full name: ", 33, 0);
    getchar(); // Consume the newline character left by the previous scanf
    fgets(user_full_name, sizeof(user_full_name), stdin);
    user_full_name[strcspn(user_full_name, "\n")] = '\0'; // Remove the newline character

    FILE *data_file = fopen("files/data.csv", "r");
    if (data_file == NULL)
    {
        printf("\nError: Could not open the data.csv file.\n");
        return false;
    }

    char line[200];
    char *id_token, *full_name_token;
    while (fgets(line, sizeof(line), data_file) != NULL)
    {
        id_token = strtok(line, ",");
        full_name_token = strtok(NULL, ",");
        full_name_token[strcspn(full_name_token, "\n")] = '\0'; // Remove the newline character

        if (strcmp(id_token, user_id) == 0 && strcmp(full_name_token, user_full_name) == 0)
        {
            // User ID and full name match in the data.csv file
            fclose(data_file);
            return true;
        }
    }

    fclose(data_file);

    return false;
}

#include "../headers/admin_function.h"

void add_student_information()
{
    system("cls");

    print_centered_bordered("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Add New Student Information \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    printf("\n\n");

    FILE *data_file = fopen("Files/data.csv", "a");
    if (data_file == NULL)
    {
        printf("Error: Could not open data.csv file.\n");
        usleep(1000000);
        return;
    }

    char name[100];
    char id[50];
    char skill[70];

    printf("Enter student ID: ");
    fflush(stdin);
    fgets(id, sizeof(id), stdin);
    id[strcspn(id, "\n")] = '\0';

    printf("\nEnter student name: ");
    fflush(stdin);
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    fprintf(data_file, "%s,%s", id, name);

    printf("\n\nInstruction for adding skill\nEnter student skills with level seperated by comma i.e (Coding Skill,Beginner) and Press Enter \nNo Extra spacing\nPress CTRL+Z to stop adding skill\n\n");

    int i = 1;

    printf("Skill %d: ", i);

    while (fgets(skill, sizeof(skill), stdin) != NULL && skill[0] != '\n')
    {
        skill[strcspn(skill, "\n")] = '\0';
        fflush(stdin);
        fprintf(data_file, ",%s", skill);
        skill[0] = '\0';
        fflush(stdin);
        i++;
        printf("Skill %d: ", i);
    }

    fprintf(data_file, "\n");

    fclose(data_file);

    printf("\nStudent information added successfully!\n\n\n");
    print_timer("Returning to the Admin Menu in", 31, 0, 3);
    system("cls");
}

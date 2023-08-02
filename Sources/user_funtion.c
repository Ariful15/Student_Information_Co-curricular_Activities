#include "../headers/user_function.h"
#include <stdio.h>
#include <string.h>

void search_student_by_id()
{
    char search_id[10];
    printf("\nEnter student ID to search: ");
    fflush(stdin);
    fgets(search_id, sizeof(search_id), stdin);
    search_id[strcspn(search_id, "\n")] = '\0';

    FILE *data_file = fopen("Files/data.csv", "r");
    if (data_file == NULL)
    {
        printf("Error: Could not open data.csv file.\n");
        usleep(1000000);
        return;
    }

    system("cls");

    bool found = false;
    char line[200];
    while (fgets(line, sizeof(line), data_file) != NULL)
    {
        char *id_token = strtok(line, ",");
        char *name_token = strtok(NULL, ",");
        char *skills_token = strtok(NULL, "\n");

        if (strcmp(id_token, search_id) == 0)
        {
            found = true;
            char temp[3] = {'\0'};
            temp[0] = id_token[2];
            temp[1] = id_token[3];
            int batch = atoi(temp) - 3;

            printf("\nSearch Result:\n\n");
            printf("%-8s%-32s%-10s%-40s\n", "ID", "Name", "Batch", "Skills");
            printf("------------------------------------------------------------------------------\n");
            printf("%-8s%-32s%-10d", id_token, name_token, batch);

            char *skill = strtok(skills_token, ",");
            char *level = strtok(NULL, ",");
            while (skill != NULL && level != NULL)
            {
                if (strcmp(level, " ") == 0)
                {
                    printf("%s", skill);
                }
                else
                {
                    printf("%s (%s)", skill, level);
                }
                skill = strtok(NULL, ",");
                level = strtok(NULL, ",");
                if (skill != NULL)
                {
                    printf(", ");
                }
            }
            printf("\n");
            break;
        }
    }

    fclose(data_file);

    if (!found)
    {
        printf("\nStudent with ID '%s' not found.\n", search_id);
    }
    
    fflush(stdin);
    printf("\n\nPress any key to return to user menu...");
    getch();
}

void search_student_by_name()
{
    char search_name[100];
    printf("\nEnter student name to search: ");
    fflush(stdin);
    fgets(search_name, sizeof(search_name), stdin);
    search_name[strcspn(search_name, "\n")] = '\0';

    FILE *data_file = fopen("Files/data.csv", "r");
    if (data_file == NULL)
    {
        printf("Error: Could not open data.csv file.\n");
        usleep(1000000);
        return;
    }

    system("cls");

    bool found = false;
    char line[200];
    while (fgets(line, sizeof(line), data_file) != NULL)
    {
        char *id_token = strtok(line, ",");
        char *name_token = strtok(NULL, ",");
        char *skills_token = strtok(NULL, "\n");

        if (strcmp(name_token, search_name) == 0)
        {
            found = true;
            char temp[3] = {'\0'};
            temp[0] = id_token[2];
            temp[1] = id_token[3];
            int batch = atoi(temp) - 3;

            printf("\nSearch Result:\n\n");
            printf("%-8s%-32s%-10s%-40s\n", "ID", "Name", "Batch", "Skills");
            printf("------------------------------------------------------------------------------\n");
            printf("%-8s%-32s%-10d", id_token, name_token, batch);

            char *skill = strtok(skills_token, ",");
            char *level = strtok(NULL, ",");
            while (skill != NULL && level != NULL)
            {
                if (strcmp(level, " ") == 0)
                {
                    printf("%s", skill);
                }
                else
                {
                    printf("%s (%s)", skill, level);
                }
                skill = strtok(NULL, ",");
                level = strtok(NULL, ",");
                if (skill != NULL)
                {
                    printf(", ");
                }
            }
            printf("\n");
            break;
        }
    }
    
    fclose(data_file);

    if (!found)
    {
        printf("\nStudent with name '%s' not found.\n", search_name);
    }

    fflush(stdin);
    printf("\n\nPress any key to return to user menu...");
    getch();
}

void view_student_information()
{
    FILE *data_file = fopen("files/data.csv", "r");
    if (data_file == NULL)
    {
        printf("Error: Could not open data.csv file.\n");
        usleep(1000000);
        return;
    }

    system("cls");

    printf("\nStudent Information:\n");
    printf("%-8s%-32s%-10s%-40s\n", "ID", "Name", "Batch", "Skills");
    printf("------------------------------------------------------------------------------\n");

    char line[200];
    while (fgets(line, sizeof(line), data_file) != NULL)
    {
        char *id_token = strtok(line, ",");
        char *name_token = strtok(NULL, ",");
        char *skills_token = strtok(NULL, "\n");

        char temp[3] = {'\0'};
        temp[0] = id_token[2];
        temp[1] = id_token[3];
        int batch = atoi(temp) - 3;

        printf("%-8s%-32s%-10d", id_token, name_token, batch);

        char *skill = strtok(skills_token, ",");
        char *level = strtok(NULL, ",");
        while (skill != NULL && level != NULL)
        {
            if (strcmp(level, " ") == 0)
            {
                printf("%s", skill);
            }
            else
            {
                printf("%s (%s)", skill, level);
            }
            skill = strtok(NULL, ",");
            level = strtok(NULL, ",");
            if (skill != NULL)
            {
                printf(", ");
            }
        }
        printf("\n");
    }

    fflush(stdin);
    printf("\n\nPress any key to return to user menu...");
    getch();

    fclose(data_file);
}

void see_batchwise_skills()
{
    int search_batch;
    printf("\nEnter batch to see skills (e.g., 18): ");
    scanf("%d", &search_batch);

    system("cls");

    int skill_choice;
    printf("\n\t\tChoose the skill to see:\n");
    printf("\t1. Coding Skill\n");
    printf("\t2. Typing Skill\n");
    printf("\t3. Analytical Skill\n");
    printf("\t4. Academic Skill\n");
    printf("\t5. Football\n");
    printf("\t6. Cricket\n");
    printf("\t7. Badminton\n");
    printf("\t8. Carrom\n");
    printf("\t9. Reciting\n");
    printf("\t10. Reading Books\n");
    printf("\t11. Chess\n");
    printf("\t12. Singing\n");
    printf("\t13. Dancing\n");
    printf("\tEnter your choice: ");
    scanf("%d", &skill_choice);

    char skills_list[13][50] = {
        "Coding Skill", "Typing Skill", "Analytical Skill", "Academic Skill",
        "Football", "Cricket", "Badminton", "Carrom", "Reciting", "Reading Books",
        "Chess", "Singing", "Dancing"};

    char search_skill[50];
    strcpy(search_skill, skills_list[skill_choice - 1]);

    FILE *data_file = fopen("Files/data.csv", "r");
    if (data_file == NULL)
    {
        printf("Error: Could not open data.csv file.\n");
        usleep(1000000);
        return;
    }

    printf("\nStudents in batch '%d' with skill '%s':\n", search_batch, search_skill);
    printf("%-8s%-32s%-20s\n", "ID", "Name", "Level");
    printf("----------------------------------------------------------------------\n");

    char line[200];
    while (fgets(line, sizeof(line), data_file) != NULL)
    {
        char *id_token = strtok(line, ",");
        char *name_token = strtok(NULL, ",");
        char *skills_token = strtok(NULL, "\n");

        char temp[3] = {'\0'};
        temp[0] = id_token[2];
        temp[1] = id_token[3];
        int batch = atoi(temp) - 3;

        char *skill = strtok(skills_token, ",");
        char *level = strtok(NULL, ",");
        while (skill != NULL && level != NULL)
        {
            if (strcmp(skill, search_skill) == 0 && batch == search_batch)
            {
                printf("%-8s%-32s%-20s\n", id_token, name_token, level);
                break;
            }
            skill = strtok(NULL, ",");
            level = strtok(NULL, ",");
        }
    }
    fflush(stdin);
    printf("\n\nPress any key to return to user menu...");
    getch();

    fclose(data_file);
}
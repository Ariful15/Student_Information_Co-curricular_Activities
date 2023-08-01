#include "../headers/welcome.h"

void welcome(void)
{
    system("cls");
    printf("\n");

    int i = 103;
    while (i--)
    {
        printf("\xB2");
    }

    printf("\n");
    print_centered("                                                                                         ");
    print_centered("\\    / _  |  _  _  ._ _   _  ");
    print_centered(" \\/\\/ (/_ | (_ (_) | | | (/_ ");
    print_centered("                                                                                         ");
    print_centered(" .     ");
    print_centered("-|-.-. ");
    print_centered(" '-`-' ");
    print_centered("                                                                                         ");
    print_centered(" __        __                                                                __            ");
    print_centered("/   _  __ /      _ _. _   | _  _ /\\  _|_.  .|_  |\\/| _  _  _  _  _ _  _ _ |_(_    _|_ _ _  ");
    print_centered("\\__(_)    \\__|_|| | |(_|_||(_|| /--\\(_|_|\\/||_\\/|  |(_|| )(_|(_)(-|||(-| )|___)\\/_)|_(-||| ");
    print_centered("                                              /              _/                /           ");

    i = 103;
    while (i--)
    {
        printf("\xB2");
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    printf("                                    Entering Main Menu in 3 seconds\r");
    fflush(stdout);
    usleep(1000000);
    printf("                                    Entering Main Menu in 2 seconds\r");
    fflush(stdout);
    usleep(1000000);
    printf("                                    Entering Main Menu in 1 second ");
    usleep(1000000);
    system("cls");
}

void print_centered(char *text)
{
    int padding = (100 - strlen(text)) / 2;
    printf("\xB2\xB2%*s%s%*s\xB2\xB2\n", padding, "", text, padding, "");
}
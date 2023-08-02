#include "../headers/welcome.h"

void welcome(void)
{
    system("cls");
    printf("\n");

    print_B2n(103);
    print_blank_border(2);
    print_centered_bordered("\\    / _  |  _  _  ._ _   _  ");
    print_centered_bordered(" \\/\\/ (/_ | (_ (_) | | | (/_ ");
    print_blank_border(1);
    print_centered_bordered(" .     ");
    print_centered_bordered("-|-.-. ");
    print_centered_bordered(" '-`-' ");
    print_blank_border(1);
    print_centered_bordered(" __        __                                                                __            ");
    print_centered_bordered("/   _  __ /      _ _. _   | _  _ /\\  _|_.  .|_  |\\/| _  _  _  _  _ _  _ _ |_(_    _|_ _ _  ");
    print_centered_bordered("\\__(_)    \\__|_|| | |(_|_||(_|| /--\\(_|_|\\/||_\\/|  |(_|| )(_|(_)(-|||(-| )|___)\\/_)|_(-||| ");
    print_centered_bordered("                                              /              _/                /           ");
    print_blank_border(2);
    print_B2n(103);

    printf("\n\n\n\n");

    print_centered("Entering Main Menu in 3 seconds\r", 36, 0);
    fflush(stdout);
    usleep(1000000);
    print_centered("Entering Main Menu in 2 seconds\r", 36, 0);
    fflush(stdout);
    usleep(1000000);
    print_centered("Entering Main Menu in 1 second ", 36, 0);
    usleep(1000000);

    system("cls");
}

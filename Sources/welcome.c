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

    print_timer("Entering Main Menu in", 36, 0, 3);

    system("cls");
}

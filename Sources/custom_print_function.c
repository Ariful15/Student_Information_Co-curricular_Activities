#include "../headers/custom_print_function.h"

void print_B2(int n)
{
    while (n--)
    {
        printf("\xB2");
    }
}

void print_B2n(int n)
{
    while (n--)
    {
        printf("\xB2");
    }
    printf("\n");
}

void print_centered_bordered(char *text)
{
    int padding = (100 - strlen(text)) / 2;
    printf("\xB2\xB2%*s%s%*s\xB2\xB2\n", padding, "", text, padding, "");
}

void print_centered(char *text, int padding_left, int padding_right)
{
    printf("%*s%s%*s", padding_left, "", text, padding_right, "");
}

void print_blank_border(int n)
{
    while (n--)
    {
        print_centered_bordered("                                                                                         ");
    }
}

void print_timer(char *text, int padding_left, int padding_right, int timer)
{
    while (timer--)
    {
        printf("%*s%s %d %s%*s", padding_left, "", text, timer + 1, "seconds\r", padding_right, "");
        fflush(stdout);
        if (timer == 0)
        {
            break;
        }
        usleep(1000000);
    }
    printf("%*s%s %d %s%*s", padding_left, "", text, timer + 1, "second ", padding_right, "");
    fflush(stdout);
    usleep(1000000);
}
/* {
    print_centered(text, l, r);
    fflush(stdout);
    usleep(1000000);
    print_centered(text, l, r);
    fflush(stdout);
    usleep(1000000);
    print_centered(text, l, r);
    fflush(stdout);
    usleep(1000000);
} */
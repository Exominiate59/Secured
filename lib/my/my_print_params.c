/*
** EPITECH PROJECT, 2024
** my_print_params
** File description:
** print parameters
*/

#include "my.h"

int main(int argc, char **argv)
{
    int i = 0;

    while (i < argc) {
        my_putstr(argv[i]);
        my_putchar('\n');
        i++;
    }
}

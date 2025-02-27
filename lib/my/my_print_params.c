/*
** EPITECH PROJECT, 2024
** my_print_params
** File description:
** print parameters
*/

#include "my.h"

int my_print_params(int argc, char **argv)
{
    int i = 0;

    while (i < argc) {
        my_putstr(argv[i]);
        my_putchar('\n');
        i++;
    }
}

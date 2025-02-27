/*
** EPITECH PROJECT, 2024
** my_swap
** File description:
** swap values of int
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}

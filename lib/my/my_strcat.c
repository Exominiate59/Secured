/*
** EPITECH PROJECT, 2024
** my_strcat
** File description:
** concatenates
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int len_dest = my_strlen(dest);

    for (int i = 0; src[i]; i++)
        dest[len_dest + i] = src[i];
    return dest;
}

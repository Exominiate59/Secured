/*
** EPITECH PROJECT, 2024
** my_is_prime
** File description:
** prime ?
*/

#include "my.h"

int my_is_prime(int nb)
{
    int try;

    if (nb <= 1)
        return (0);
    for (try = 2; try < (nb / 2 + 1); try++) {
        if ((nb % try) == 0)
            return (0);
    }
    return (1);
}

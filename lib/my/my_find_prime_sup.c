/*
** EPITECH PROJECT, 2024
** my_find_prime_sup
** File description:
** next prime
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    while (my_is_prime(nb) != 1) {
        nb = nb + 1;
        my_is_prime(nb);
    }
    return (nb);
}

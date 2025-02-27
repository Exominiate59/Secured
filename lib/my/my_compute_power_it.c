/*
** EPITECH PROJECT, 2024
** my_compute_power_it
** File description:
** nb puissance p
*/

#include "my.h"

int my_compute_power_it(int nb, int p)
{
    long int res = nb;

    if (nb == 1 || p == 0) {
        return (1);
    }
    if (nb == 0 || p < 0) {
        return (0);
    }
    for (int i = 2; i <= p; i++) {
        res = res * nb;
    }
    return (res);
}

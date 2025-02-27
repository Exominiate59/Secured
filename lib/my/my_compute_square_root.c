/*
** EPITECH PROJECT, 2024
** my_compute_square_root
** File description:
** racine carrée
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    int try = 1;

    while (my_compute_power_it(try, 2) <= nb) {
        if (my_compute_power_it(try, 2) == nb) {
            return try;
        }
        try++;
    }
    return (0);
}

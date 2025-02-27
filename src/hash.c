/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-antoine.rousselle
** File description:
** hash.c
*/

#include "hashtable.h"

void generate_fibonacci(int fib[], int n)
{
    fib[1] = 1;
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

int hash(char *key, int len)
{
    const int constant = 358132134;
    int fibonacci_base[20];
    unsigned long long total = 0;
    unsigned long long transformed = 0;
    unsigned long long int mixed_total = 0;
    int ascii_val = 0;
    int position = 0;

    generate_fibonacci(fibonacci_base, 20);
    for (int i = 0; key[i] != '\0'; i++) {
        ascii_val = (int)key[i];
        position = i + 1;
        transformed = ascii_val;
        for (int j = 0; j < 6; j++)
            transformed *= fibonacci_base[(position + j - 1) % 20];
        transformed += constant;
        total += transformed;
    }
    mixed_total = (total ^ (total >> 16)) & 0xFFFFFFFF;
    return mixed_total % (int)my_compute_power_it(10, len);
}

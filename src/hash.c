/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-antoine.rousselle
** File description:
** hash.c
*/

#include "hashtable.h"

int hash(char *key, int len)
{
    unsigned long hash_value = 0;

    if (!key || len <= 0)
        return -1;
    for (int i = 0; key[i]; i++) {
        hash_value = (hash_value * 31) + key[i];
        hash_value ^= (hash_value >> 15);
    }
    return (int)(hash_value % len);
}

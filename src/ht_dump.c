/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-antoine.rousselle
** File description:
** ht_dump.c
*/

#include "hashtable.h"

void ht_dump(hashtable_t *ht)
{
    hashnode_t *current = NULL;

    if (!ht)
        return;
    for (int i = 0; i < ht->len; i++) {
        current = ht->node[i];
        mini_printf("[%d]:\n", i);
        while (current) {
            mini_printf("> %d - %s\n", current->hash_value, current->value);
            current = current->next;
        }
    }
}

/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-antoine.rousselle
** File description:
** ht_search.c
*/

#include "hashtable.h"

char *ht_search(hashtable_t *ht, char *key)
{
    int hashed_key = 0;
    int index = 0;
    hashnode_t *current = NULL;

    if (!ht || !key || !ht->node || ht->len == 0)
        return NULL;
    hashed_key = hash(key, ht->len);
    index = hashed_key % ht->len;
    if (index < 0 || index >= ht->len || hashed_key < 0)
        return NULL;
    current = ht->node[index];
    while (current) {
        if (!current->hash_value)
            return NULL;
        if (hashed_key == current->hash_value)
                return current->value;
        current = current->next;
    }
    return NULL;
}

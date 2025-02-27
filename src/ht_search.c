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

    if (ht == NULL || key == NULL)
        return NULL;
    hashed_key = hash(key, ht->len);
    index = hashed_key % ht->len;
    current = ht->node[index];
    while (current) {
        if (my_strcmp(current->key, key) == 0)
            return current->value;
        current = current->next;
    }
    return NULL;
}

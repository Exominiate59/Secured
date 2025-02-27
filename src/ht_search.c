/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-antoine.rousselle
** File description:
** ht_search.c
*/

#include "hashtable.h"

char *ht_search(hashtable_t *ht, char *key)
{
    int hash_value = 0;
    int index = 0;
    hashnode_t *current = NULL;

    if (!ht || !key || !ht->node || ht->len <= 0)
        return NULL;
    hash_value = hash(key, ht->len);
    if (hash_value < 0)
        return NULL;
    index = hash_value % ht->len;
    if (index < 0 || index >= ht->len)
        return NULL;
    current = ht->node[index];
    while (current) {
        if (hash_value == current->hash_value
            && my_strcmp(current->key, key) == 0)
                return current->value;
        current = current->next;
    }
    return NULL;
}

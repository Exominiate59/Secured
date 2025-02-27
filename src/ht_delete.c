/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-antoine.rousselle
** File description:
** ht_delete.c
*/

#include "hashtable.h"

int ht_delete(hashtable_t *ht, char *key)
{
    int hash_value = 0;
    int index = 0;
    hashnode_t *current;
    hashnode_t *prev;

    if (!ht || !key)
        return 84;
    hash_value = hash(key, ht->len);
    index = hash_value % ht->len;
    current = ht->node[index];
    while (current) {
        if (my_strcmp(current->key, key) == 0) {
            if (prev)
                prev->next = current->next;
            else
                ht->node[index] = current->next;
            free(current->key);
            free(current->value);
            free(current);
            return 0;
        }
        prev = current;
        current = current->next;
    }
    return 84;
}

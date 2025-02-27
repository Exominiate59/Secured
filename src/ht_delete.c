/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-antoine.rousselle
** File description:
** ht_delete.c
*/

#include "hashtable.h"

int delete_node(hashtable_t *ht, hashnode_t *current,
    hashnode_t *prev, int index)
{
    if (!ht || !current)
        return 84;
    if (prev)
        prev->next = current->next;
    else
        ht->node[index] = current->next;
    free(current->key);
    free(current->value);
    free(current);
    return 0;
}

int ht_delete(hashtable_t *ht, char *key)
{
    int hash_value = 0;
    int index = 0;
    hashnode_t *current = NULL;
    hashnode_t *prev = NULL;

    if (!ht || !key || !ht->node)
        return 84;
    hash_value = ht->hash(key, ht->len);
    index = hash_value % ht->len;
    current = ht->node[index];
    while (current) {
        if (hash_value == current->hash_value
            && my_strcmp(current->key, key) == 0)
            return delete_node(ht, current, prev, index);
        prev = current;
        current = current->next;
    }
    return 84;
}

/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-antoine.rousselle
** File description:
** ht_insert.c
*/

#include "hashtable.h"

int insert_new_node(hashtable_t *ht, char *key,
    char *value, int hash_value)
{
    int index = hash_value % ht->len;
    hashnode_t *new_node = malloc(sizeof(hashnode_t));

    if (!new_node)
        return 84;
    new_node->key = my_strdup(key);
    new_node->value = my_strdup(value);
    new_node->hash_value = hash_value;
    new_node->next = ht->node[index];
    ht->node[index] = new_node;
    return 0;
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int hash_value = 0;
    int index = 0;
    hashnode_t *current = NULL;

    if (!ht || !key || !value)
        return 84;
    hash_value = ht->hash(key, ht->len);
    index = hash_value % ht->len;
    current = ht->node[index];
    while (current) {
        if (hash_value == current->hash_value
            && my_strcmp(current->key, key) == 0) {
            free(current->value);
            current->value = my_strdup(value);
            return 0;
        }
        current = current->next;
    }
    return insert_new_node(ht, key, value, hash_value);
}

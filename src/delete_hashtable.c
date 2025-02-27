/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-antoine.rousselle
** File description:
** delete_hashtable.c
*/

#include "hashtable.h"

void delete_hashtable(hashtable_t *ht)
{
    hashnode_t *current;
    hashnode_t *temp;

    if (!ht)
        return;
    for (int i = 0; i < ht->len; i++) {
        current = ht->node[i];
        while (current != NULL) {
            temp = current;
            current = current->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
    }
    free(ht->node);
    free(ht);
}

/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-antoine.rousselle
** File description:
** new_hashtable.c
*/

#include "hashtable.h"

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *new_hashtable = malloc(sizeof(hashtable_t));

    if (!new_hashtable || len <= 0 || !hash)
        return NULL;
    new_hashtable->len = len;
    new_hashtable->node = malloc(len * sizeof(hashnode_t));
    new_hashtable->hash = hash;
    if (!new_hashtable->node) {
        free(new_hashtable);
        return NULL;
    }
    for (int i = 0; i < len; i++)
        new_hashtable->node[i] = NULL;
    return new_hashtable;
}

/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-antoine.rousselle
** File description:
** main.c
*/

#include "hashtable.h"

int main(void)
{
    hashtable_t * ht = new_hashtable(&hash, 4);
    ht_insert(ht, "Vision", "lacalottedesesmorts");
    ht_insert(ht, "lepipidemamie", "yo");
    ht_delete(ht, "Vision");
    ht_insert(ht, "lepipidemamie", "eeayyyiiooooo");
    ht_delete(ht, "lepipidemamie");
    return 0;
}

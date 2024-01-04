#include "hash_tables.h"
/*
* hash_table_set - Adds a key value pair to a hashtable
*
* @ht:  The hashtable
*
* @key: They key the hash should be gotten from
*
* @Value:   Value associated with the key
*
* Return:   0 on Failure, 1 on Success
*
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value) {
    hash_node_t *newNode;
    hash_node_t *head;
    hash_node_t *current;
    unsigned long int index;

    if (key == NULL || *key == '\0' || ht == NULL) {
        return 0;
    }

    index = key_index((const unsigned char *)key, ht->size);

    head = ht->array[index];
    current = head;
    
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            free(current->value);
            current->value = strdup(value);
            return 1;
        }
        current = current->next;
    }


    newNode = malloc(sizeof(hash_node_t));
    if (newNode == NULL) {
        perror("Memory allocation failed");
        return 0;
    }

    newNode->key = strdup(key);
    newNode->value = strdup(value);
    newNode->next = head;
    
    ht->array[index] = newNode;
    
    return 1;
}

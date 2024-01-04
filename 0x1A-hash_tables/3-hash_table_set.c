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
    if (key == NULL || *key == '\0' || ht == NULL) {
        return 0; // Invalid key or hash table
    }

    unsigned long int index = key_index((const unsigned char *)key, ht->size);

    hash_node_t *head = ht->array[index];

    // Check if the key already exists in the list
    hash_node_t *current = head;
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            // Key found, update the value and return
            free(current->value);
            current->value = strdup(value);
            return 1; // Successfully updated value for existing key
        }
        current = current->next;
    }

    // Key not found, create a new node and add at the beginning of the list
    hash_node_t *newNode = malloc(sizeof(hash_node_t));
    if (newNode == NULL) {
        perror("Memory allocation failed");
        return 0;
    }

    newNode->key = strdup(key);
    newNode->value = strdup(value);
    newNode->next = head; // Add the new node at the beginning of the list

    ht->array[index] = newNode; // Update the hash table array with the new node

    return 1; // Successfully added the key-value pair
}

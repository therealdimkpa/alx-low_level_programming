#include "hash_tables.h"

/**
 * hash_table_create - Creates a hashtable
 * @size -  The size of the hastable to be created
 * Return-  Pointer to the hashtable
*/

hash_table_t *hash_table_create(unsigned long int size){
    long unsigned int i;
    hash_table_t *table;
    hash_node_t **array;
    
    
    table = malloc(sizeof(hash_table_t));
    if (table == NULL){
        free(table);
        return NULL;
    }

    array = malloc(sizeof(hash_node_t**));
    if (array == NULL)
    {
        free(array);
        return NULL;
    }
    else{
        table->size = size;
        table->array = malloc(sizeof(hash_node_t**) * size);
    }

    if (table->array == NULL){
        free(table);
        return NULL;
    }

    else{
        for (i = 0; i < size; i++){
            table->array[i] = NULL;
        }
    }

    return table;
}        

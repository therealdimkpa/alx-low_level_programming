#include "hash_tables.h"

/*
* key_index: Generates index for any string using the djb2 algorithm
* @key: The string to be hashed
* @size: The size of the hash array the index is to be used
* Return: The index to be used in the hash table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size){
    unsigned long int hash;
    unsigned long int index;

    hash = hash_djb2(key);
    index = hash % size;

    return(index);
}

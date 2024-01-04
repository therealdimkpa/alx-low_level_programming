#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht){
    hash_node_t *head;

/*    char *output = "{"; 
    char *str1 = " : ";
    char *str2 = ", "; */
    unsigned int size = ht->size;
    unsigned int i = 0;

    if (ht == NULL){
        printf("Hashtable is null");
    }
    else{
        for (i = 0; i < size; i++){
            head = ht->array[i];
            while(head != NULL){
                printf("%s : %s ", head->key, head->value);
 
                head = head->next;
            }
        }
/*        i = (unsigned int)strlen(output);
        output[i-1] = (char)('}'); 
        printf("}");*/
    }
}

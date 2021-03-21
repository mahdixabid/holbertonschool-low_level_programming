#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
size_t print_list(const list_t *h) {
    int n = 0;
    if (h==NULL)
    {
        return 0;
    }
    while (h != NULL)
    {
        if (h -> str == NULL)
        {
            printf("[0] (nill)\n");
        }
        else 
        {
            printf ("[%d] %s \n", h->len, h-> str);
        }
        n++;
        h= h-> next;
    }
return (n);
}
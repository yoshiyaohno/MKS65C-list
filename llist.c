#include <stdio.h>
#include <stdlib.h>
#include "llist.h"

void print_list( struct node *list)
{
    if( list ) {
        printf("%d -> ", list->value);
        print_list( list->next);
        return;
    }
    printf("NULL\n");
}

struct node *insert_front( struct node *list, int value )
{
    struct node *new_node = malloc( sizeof(struct node) );
    new_node->value = value;
    new_node->next  = list;
    return new_node;
}

struct node *free_list( struct node *list )
{
    if( !list ) return list;
    free_list(list->next);
    // list->value = 0;
    list->next = NULL;
    free(list);
    list = NULL;
    return list;
}

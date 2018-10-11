#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

void print_list( struct node * );
struct node *insert_front( struct node *, int );
struct node *free_list( struct node * );

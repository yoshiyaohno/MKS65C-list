#include <stdio.h>
#include <stdlib.h>
#include "llist.h"

int main()
{
    struct node *jeff = NULL;
    print_list(jeff);
    
    printf("Filling jeff\n");
    int i = 16;
    while( i--) {
        jeff = insert_front(jeff, i);
        print_list(jeff);
    }

    printf("\nfreeing jeff->next->next\n");
    jeff->next->next = free_list(jeff->next->next);
    print_list(jeff);
    printf("\nfreeing jeff\n");
    jeff = free_list(jeff);
    printf("OOf OOF\n");
    print_list(jeff);
    

    /* TIME FOR MANUAL NODE MANAGEMENT . . ? */
    return 0;
}

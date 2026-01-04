#include "header.h"
#include <string.h>
#include <stdio.h>
int main(int ac, char *av[])
{
    if(ac < 2)
        return 0;

    int i = 2;
    
    t_link *s;
    t_link *head = new_node(atoi(av[1]));



    while (av[i] != NULL)
    {
        
       s = new_node(atoi(av[i]));
       add_node(s ,head);
       i++;
    }
    s = head;
    while (s)
    {
        printf("%d\n" ,s -> data);
        s = s -> next;
    }
    free_list(head);

    return 0;
}
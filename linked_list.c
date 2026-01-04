#include "header.h"


t_link *new_node(int b)
{
    t_link *node;

    node = malloc(sizeof(t_link));
    if(node == NULL)
        return NULL;
    node->data = b;
    node->next = NULL;
    return node;
}

void add_node(t_link *node, t_link *head)
{
    if (!head)
    {
        head = node;
        return;
    }
    
    t_link *s = head;

    while (s -> next != NULL)
    {
        s = s -> next;
    }
    s -> next = node;
}

void free_list(t_link *link)
{
    t_link *s = link;
    t_link *tmp;
    while (s)
    {
       tmp = s -> next ;
       free(s);
       s = tmp;
    }
}
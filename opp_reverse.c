#include <stdio.h>
#include <stdlib.h>

void reverse (t_link **head)
{
    if((*head) == NULL || (*head) -> next == NULL)
        return;
    t_link *tmp;
    t_link *s = *head;
    while (s -> next && (s -> next) -> next)
        s = s -> next;
    tmp = s -> next;
        s -> next = NULL;
    s = *head;
    *head = tmp;
    (*head) -> next = s;
}
void rra (t_link **a)
{
    reverse(a);
    write(1, "rra\n", 4);
}
void rrb (t_link **b)
{
    reverse(b);
    write(1, "rrb\n", 4);
}
void rrr (t_link **a, t_link **b)
{
    reverse(a);
    reverse(b);
    write(1, "rrr\n", 4);
}
/*
int main ()
{
    int i = 2;
    t_link *head;
    t_link *s;
    head = malloc(sizeof(t_link));
    head->data = 1;
    head->next = NULL;
    
    t_link *s = head;
    while (i <=20)
    {
        s -> next = malloc (sizeof(t_link));
        s -> data = i;
        if (i == 20)
        s -> next =NULL;
       else
           s = s -> next;
        i++;
    }
    
    s = head;
    rra(&s);
    while (s != NULL)
    {
        printf("%d\n", s -> data);
        s = s -> next;
    }
    return 0;
}
*/

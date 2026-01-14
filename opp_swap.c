
void swap (t_link **head)
{
    if(!(*head) || (*head) -> next == NULL)
    return;
    t_link *tmp = *head;
    *head = (*head) -> next;
    tmp -> next = (*head) -> next;
    (*head) -> next = tmp;
}

void sa (t_link **a)
{
    swap (a);
    write(1, "sa\n", 3);
}

void sb (t_link **b)
{
    swap(b);
   write(1, "sb\n", 3);
}

void ss (t_link **a, t_link **b)
{
    swap(a);
    swap(b);
    write(1, "ss\n", 3);
}



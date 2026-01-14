static void rotate (t_link **x)
{
       if(!(*x) || (*x) -> next == NULL)
        return ;
    t_link *tmp = *x;
    *x = (*x) -> next;
    t_link *s = *x;
    while (s -> next != NULL)
    s = s -> next;
    s -> next = tmp;
    s = s -> next;
    s -> next = NULL;
}

void ra (t_link **a)
{
    rotate (a);
    write(1, "ra\n", 3);
}

void rb (t_link **b)
{
    rotate(b);
    write(1, "rb\n", 3);
}

void rr (t_link **a ,t_link **b)
{
    rotate(a);
    rotate(b);
    write(1, "rr\n", 3);
}

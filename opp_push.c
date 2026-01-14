void pb (t_link **a, t_link **b )
{
    if(!(*a))
        return ;
    t_link *tmp2 = *b; 
    t_link *tmp = *a; 
    *a = (*a) -> next;
    (*b) = tmp;
    (*b) -> next = tmp2;
     write(1, "pb\n", 3); 
}
    
void pa (t_link **a, t_link **b)
{
      if(!(*b))
        return ;
    t_link *tmp2 = *a; 
    t_link *tmp = *b; 
    *b = (*b) -> next;
    (*a) = tmp;
    (*a) -> next = tmp2;
    write(1, "pa\n", 3); 
}

#include "header.h"
int main (int argc, char **argv)
{
 //  if (!parsing(argc, argv))
   //    return 0;
   t_link *head = parsing(argc, argv);
   if(head == NULL)
       return 0;
   while (head)
   {
       printf("%d \n", (head) -> data);
       head = (head) -> next;
   }
   free_list(&head);
   return 0;
}

t_link *parsing (int argc , char *argv[])
{
    if (argc < 2)
        return NULL;

    char **s;
    int i ;

    i = 1;
    t_link *head;
    head = NULL;
    while (argv[i])
    {
        s = ft_split(argv[i], ' ');
        if(*s == NULL)
            return (free_all(&s, &head));
        if(check_args(s) == 1)
        {
            helper(s, &head);
            if(check_dupl(head) == 0)
                return (free_all(&s, &head));
            i++;
            free_str(&s);
        }
        else
            return (free_all(&s, &head));
    }
        return head;
}

t_link *free_all(char ***s, t_link **head)
{
    free_str(s);
    free_list(head);
    printf("error");
    return NULL;
}

void helper(char **s, t_link **head)
{
    int a ;
    a = 0;
    while (s[a])
    {
        add_node(new_node(ft_atoi(s[a])),head);
        a++;
    }
}

void free_str (char ***str)
{
    if (!str || !*str)
        return;
    int a;
    a = 0;
    while ((*str)[a])
    {
        free((*str)[a]);
        a++;
    }
    free(*str);
    *str = NULL;
}

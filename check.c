#include "header.h"

int check_args (char ** str)
{
    int i;
    int a;

    a = 0;
    while (str[a])
    {
        i = 0;
        while (str[a][i])
        {
            if ((str[a][i] >= '0' && str[a][i] <= '9') || str[a][i] == '-' || str[a][i] == '+')
            {
                if((i == 0) && (str[a][i] == '-' || str[a][i] == '+'))
                    i++;
                if(!(str[a][i] >= '0' && str[a][i] <= '9'))
                    return 0;
            }
            else 
                return 4;
            i++;
        }
        if(ft_atoi(str[a]) > 2147483647 || ft_atoi(str[a]) < -2147483648)
            return 0;
        a++;
    }
    return 1;
}

int check_dupl (t_link *head)
{
    t_link *s;
    while (head -> next != NULL)
    {
        s = head;
        while (s)
        {
            s = s -> next;
            if ((s) && s -> data == head -> data)
                return 0;
        }
        head = head -> next;
    }
    return 1;
}


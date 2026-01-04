/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-boud <kel-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 12:05:24 by kel-boud          #+#    #+#             */
/*   Updated: 2026/01/04 13:29:24 by kel-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_list 
{
    int data;
    int index;
    
    struct s_list *next;
} t_link;

t_link *new_node(int b);
void add_node(t_link *node, t_link *head);
void free_list(t_link *link);


#endif
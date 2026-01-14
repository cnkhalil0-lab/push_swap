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
#include <stdio.h>

typedef struct s_list 
{
    int data;
    
    struct s_list *next;
} t_link;

t_link *new_node(int b);
void add_node(t_link *node, t_link **head);
void free_list(t_link **head);
int check_args (char ** str);
char    **ft_split(char const *s, char c);
long long   ft_atoi(const char *str);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
void free_list(t_link **head);
void free_str (char ***str);
t_link *free_all(char ***s, t_link **head);
void helper(char **s, t_link **head);
 int check_dupl (t_link *head);
t_link *parsing (int argc , char *argv[]);
#endif

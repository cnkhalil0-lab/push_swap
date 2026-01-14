/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrasmouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 03:37:28 by mrasmouk          #+#    #+#             */
/*   Updated: 2025/11/03 11:52:07 by mrasmouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	ft_overflow(long long nbr, int n_element, int sign)
{
	long long	ov;

	ov = nbr * 10 + (n_element);
	if (ov / 10 != nbr)
	{
		if (sign > 0)
			return (-1);
		return (0);
	}
	return (1);
}

static long long	ft_do_conversion(const char *str, int i, int sign)
{
	int			overflow;
	long long	result;

	result = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		overflow = ft_overflow(result, (str[i] - '0'), sign);
		if (overflow != 1)
		{
			return 9000000000000000000;
		}
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return (result * sign);
}

long long	ft_atoi(const char *str)
{
	int				i;
	int				sign;

	i = 0;
	sign = 1;
	if (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	return (ft_do_conversion(str, i, sign));
}

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  n;

    n = 0;
    while (src[n])
    {
        n++;
    }
    if (dst == src)
        return (n);
    i = 0;
    if (size > 0)
    {
        while (i < (size - 1) && src[i])
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (n);
}

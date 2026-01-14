#include "header.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size);

static size_t	count_strings(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static size_t	count_legth(char const *s, char c, size_t *i)
{
	size_t	j;
	int		k;

	j = 0;
	while (s[*i])
	{
		k = 0;
		if (s[*i] != c)
		{
			j++;
			k = 1;
		}
		if (j != 0 && k == 0)
			return (j);
		(*i)++;
	}
	return (j);
}

static int	ft_mall_free(char **str, size_t len, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len_2;

	i = 0;
	j = 0;
	while (j < len)
	{
		len_2 = count_legth(s, c, &i);
		str[j] = malloc((len_2 + 1) * sizeof(char));
		if (str[j] == NULL)
		{
			i = 0;
			while (i < j)
			{
				free(str[i]);
				i++;
			}
			free(str);
			return (0);
		}
		j++;
	}
	return (1);
}

static void	split_copy(char **str, char const *s, char c, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	size;

	i = 0;
	j = 0;
	while (j < len)
	{
		while (s[i] && s[i] == c)
			i++;
		k = i;
		size = count_legth(s, c, &i) + 1;
		ft_strlcpy(str[j], &s[k], size);
		j++;
	}
	str[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	len;

	if (!s)
		return (NULL);
	len = count_strings(s, c);
	str = malloc((len + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	if (ft_mall_free(str, len, s, c) == 0)
		return (NULL);
	split_copy(str, s, c, len);
	return (str);
}

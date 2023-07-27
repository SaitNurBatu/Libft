/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabatu <sabatu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 01:08:10 by sabatu            #+#    #+#             */
/*   Updated: 2023/07/17 20:22:33 by sabatu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_counter(char const *s, char c)
{
	int	a;

	a = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
			a++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (a);
}

void	free_check(char **split)
{
	size_t	i;

	i = 0;
	while (split != (NULL))
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static	void	checkbig(char const *s, char c, char **x)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*s)
	{
		while (*s == c && s++)
			;
		i = 0;
		while (*s != c && *s != '\0' && s++)
			i++;
		if (i > 0)
		{
			x[j] = ft_substr(s - i, 0, i);
			if (!x[j])
			{
				free_check(x);
			}
			j++;
		}
	}
	x[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**x;

	x = malloc((ft_counter(s, c) + 1) * sizeof(char *));
	if (!x)
		return (NULL);
	checkbig(s, c, x);
	return (x);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabatu <sabatu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 17:32:10 by sabatu            #+#    #+#             */
/*   Updated: 2023/07/14 18:20:48 by sabatu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*stotal;
	size_t	x;
	size_t	a;
	size_t	b;

	b = 0;
	a = 0;
	x = ft_strlen(s1) + ft_strlen(s2) + 1;
	stotal = malloc(x * sizeof(char));
	if (!stotal)
		return (NULL);
	while (s1[b])
	{
		stotal[b] = s1[b];
		b++;
	}
	while (s2[a])
	{
		stotal[b] = s2[a];
		b++;
		a++;
	}
	stotal[b] = '\0';
	return (stotal);
}

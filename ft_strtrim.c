/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabatu <sabatu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:21:34 by sabatu            #+#    #+#             */
/*   Updated: 2023/07/16 01:04:26 by sabatu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len1;
	size_t	start;
	size_t	len_set;
	size_t	end;
	char	*x;

	start = 0;
	len_set = ft_strlen(set);
	len1 = ft_strlen(s1);
	end = len1;
	if (s1 == NULL)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
	if (start > end)
		return (ft_strdup(""));
	x = ft_substr(s1, start, end - start + 1);
	return (x);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabatu <sabatu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:59:15 by sabatu            #+#    #+#             */
/*   Updated: 2023/07/15 22:30:06 by sabatu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*x;
	size_t			i;

	x = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		x[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

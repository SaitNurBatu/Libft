/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabatu <sabatu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:05:12 by sabatu            #+#    #+#             */
/*   Updated: 2023/07/17 21:45:05 by sabatu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int x)
{
	int	a;

	a = 0;
	if (x == 0)
		a = 1;
	if (x < 0)
	{
		a++;
		x = -x;
	}
	while (x > 0)
	{
		x = x / 10;
		a++;
	}
	return (a);
}

static	int	negative_check(char *s, int n)
{
	if (n == -2147483648)
	{
		s[0] = '-';
		s[1] = '2';
		n = 147483648;
	}
	else if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	return (n);
}

static void	number(char *s, int n, int count)
{
	int	i;

	i = count;
	s[count] = '\0';
	i--;
	while (n > 0)
	{
		s[i] = '0' + (n % 10);
		n = n / 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	char	*s;
	int		count;

	if (n == -2147483648)
		count = 11;
	else
		count = ft_count(n);
	s = (char *)malloc((count + 1) * sizeof(char));
	if (!s)
		return (NULL);
	n = negative_check(s, n);
	if (n == 0)
	{
		s[0] = '0';
		s[1] = '\0';
		return (s);
	}
	else
		number(s, n, count);
	return (s);
}

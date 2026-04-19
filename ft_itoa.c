/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 09:45:46 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/19 11:20:04 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	malloc_size(int n)
{
	int	size;

	if (n == 0)
		return (1);
	size = 0;
	if (n < 0)
		size++;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*ascii;
	int		i;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	ascii = malloc(malloc_size(n) + 1);
	if (ascii == NULL)
		return (NULL);
	i = malloc_size(n);
	ascii[i] = '\0';
	if (n == 0)
		ascii[0] = '0';
	if (n < 0)
	{
		ascii[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		ascii[i - 1] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (ascii);
}

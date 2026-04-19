/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 13:58:14 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/19 11:36:46 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	malloc_size_usigned(unsigned int n)
{
	unsigned int	size;

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

char	*ft_itoa_unsigned(unsigned int n)
{
	char	*ascii;
	unsigned int		i;

	if (n == UINT_MAX)
		return (ft_strdup("4294967295"));
	ascii = malloc(malloc_size_usigned(n) + 1);
	if (ascii == NULL)
		return (NULL);
	i = malloc_size_usigned(n);
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

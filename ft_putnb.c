/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 09:45:46 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/18 17:11:52 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_digits(int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	while (nb >= 10)
	{
		nb /= 10;
		count++;
	}
	return (count + 1);
}

int	ft_putnb(int nb)
{
	if (nb == INT_MIN)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnb(nb / 10);
		ft_putnb(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

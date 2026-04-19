/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 18:53:00 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/19 19:52:54 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *count)
{
	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
		*count += 11;
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = - nb;
		*count += 1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, count);
		ft_putnbr(nb % 10, count);
	}
	else
	{
		nb = nb + 48;
		write(1, &nb, 1);
		*count += 1;
	}
}

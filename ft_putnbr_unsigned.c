/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 19:52:39 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/19 20:00:51 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int nb, int *count)
{
	if (nb >= 10)
	{
		ft_putnbr_unsigned(nb / 10, count);
		ft_putnbr_unsigned(nb % 10, count);
	}
	else
	{
		nb = nb + 48;
		write(1, &nb, 1);
		*count += 1;
	}
}

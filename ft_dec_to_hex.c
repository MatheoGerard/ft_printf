/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:14:33 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/19 14:26:18 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_dec_to_hex(unsigned int nb, char *base, int *count)
{
	if (nb > 15)
	{
		ft_dec_to_hex(nb / 16, base, count);
		ft_dec_to_hex(nb % 16, base, count);
	}
	else
	{
		ft_putchar(base[nb]);
		*count += 1;
	}
}

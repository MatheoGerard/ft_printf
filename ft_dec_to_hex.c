/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:14:33 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/18 14:22:14 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_dec_to_hex(unsigned int nb, char *base)
{
	if (nb > 15)
	{
		ft_dec_to_hex_ptr(nb / 16, base);
		ft_dec_to_hex_ptr(nb % 16, base);
	}
	else
	{
		ft_putchar(base[nb]);
	}

}

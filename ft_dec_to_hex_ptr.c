/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_hex_ptr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 12:22:18 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/18 14:11:25 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_dec_to_hex_ptr(uintptr_t nb, char *base)
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

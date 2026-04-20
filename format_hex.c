/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 21:45:22 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/20 22:08:35 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_hex_low(char const *str, int i, int *count, va_list args)
{
	char	*base;

	base = "0123456789abcdef";
	if (str[i] == 'x')
	{
		ft_dec_to_hex(va_arg(args, unsigned int), base, count);
		*count -= 2;
	}
}

void	format_hex_high(char const *str, int i, int *count, va_list args)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (str[i] == 'X')
	{
		ft_dec_to_hex(va_arg(args, unsigned int), base, count);
		*count -= 2;
	}
}

void	format_hex_low_ptr(char const *str, int i, int *count, va_list args)
{
	char	*base;

	base = "0123456789abcdef";
	if (str[i] == 'p')
	{
		ft_putstr("0x", count);
		ft_dec_to_hex_ptr(va_arg(args, uintptr_t), base, count);
	}
}

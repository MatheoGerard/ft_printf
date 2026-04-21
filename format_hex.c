/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 21:45:22 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/21 16:32:28 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_hex(char const *str, int i, int *count, va_list args)
{
	char	*base;

	if (args == NULL)
	{
		ft_putstr("0", count);
	}
	if (str[i] == 'x')
	{
		base = "0123456789abcdef";
		ft_dec_to_hex(va_arg(args, unsigned int), base, count);
		*count -= 2;
	}
	else if (str[i] == 'p')
	{
		base = "0123456789abcdef";
		ft_putstr("0x", count);
		ft_dec_to_hex_ptr(va_arg(args, uintptr_t), base, count);
	}
	else if (str[i] == 'X')
	{
		base = "0123456789ABCDEF";
		ft_dec_to_hex(va_arg(args, unsigned int), base, count);
		*count -= 2;
	}
}

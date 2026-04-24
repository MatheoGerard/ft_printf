/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 21:45:22 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/24 14:01:24 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ptr_format(const char *str, int i, va_list args, int *count)
{
	char	*base;
	void	*ptr;

	if (str[i] == 'p')
	{
		ptr = va_arg(args, void *);
		if (ptr == NULL)
			ft_putstr("(nil)", count);
		else
		{
			base = "0123456789abcdef";
			ft_putstr("0x", count);
			ft_dec_to_hex_ptr((uintptr_t)ptr, base, count);
		}
	}
}

void	format_hex(char const *str, int i, int *count, va_list args)
{
	char	*base;

	if (str[i] == 'x')
	{
		if (args == NULL)
			ft_putstr("0", count);
		else
		{
			base = "0123456789abcdef";
			ft_dec_to_hex(va_arg(args, unsigned int), base, count);
			*count -= 2;
		}
	}
	else if (str[i] == 'X')
	{
		if (args == NULL)
			ft_putstr("0", count);
		else
		{
			base = "0123456789ABCDEF";
			ft_dec_to_hex(va_arg(args, unsigned int), base, count);
			*count -= 2;
		}
	}
	ptr_format(str, i, args, count);
}

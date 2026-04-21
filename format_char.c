/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 22:12:01 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/21 18:06:46 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_char(const char *str, va_list args, int i, int *count)
{
	if (str[i] == 'c')
	{
		if (args == NULL)
		{
			ft_putstr("\0", count);
		}
		*count += ft_putchar(va_arg(args, int));
	}
	else if (str[i] == 's')
	{
		if (args == NULL)
		{
			ft_putstr(NULL, count);
		}
		ft_putstr(va_arg(args, char *), count);
	}
}

void	print_precent(const char *str, int *count, int i)
{
	if (str[i] == '%')
		*count += ft_putchar('%');
}

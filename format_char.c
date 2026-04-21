/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 22:12:01 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/21 17:04:42 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_char(const char *str, va_list args, int i, int *count)
{
	if (str[i] == 'c')
		*count += ft_putchar(va_arg(args, int));
	else if (str[i] == 's')
		ft_putstr(va_arg(args, char *), count);
}

void	print_precent(const char *str, int *count, int i)
{
	if (str[i] == '%')
		*count += ft_putchar('%');
}

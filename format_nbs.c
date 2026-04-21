/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_nbs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:40:41 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/21 16:59:56 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_nbs(char const *str, int i, int *count, va_list args)
{
	if (args == NULL)
	{
		ft_putstr("0", count);
	}
	if (str[i] == 'd' || str[i] == 'i')
	{
		ft_putnbr(va_arg(args, int), count);
		*count -= 2;
	}
	else if (str[i] == 'u')
	{
		ft_putnbr_unsigned(va_arg(args, unsigned int), count);
		*count -= 2;
	}
}

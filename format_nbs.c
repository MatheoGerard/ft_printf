/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_nbs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:40:41 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/20 17:14:25 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void	format_nbs(char const *str, int i, int *count, va_list args)
{
	if (str[i] == 'd' || str[i] == 'i')
	{
		ft_putnbr(va_arg(args, int), count);
		*count -= 2;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 08:30:08 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/18 10:10:16 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	va_list args;
	int	i;

	if (str == NULL)
		return (-1);
	va_start(args, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 's')
				ft_putstr(va_arg(args, char *));
			else if (str[i] == 'd')
				ft_putnb(va_arg(args, int));
			else if (str[i] == 'c')
				ft_putchar(va_arg(args, int));
			i++;
		}
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
#include <stdio.h>
int main(void)
{

	const char *str = "BONJOUR";
	int nb = 42;
	char dot = '.';
	ft_printf("j ai envie de te dire %s au moins %d fois %c", str, nb, dot);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 08:30:08 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/18 16:54:49 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	va_list args;
	int	i;
	int	count;

	if (str == NULL)
		return (-1);
	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 's')
				count += ft_putstr(va_arg(args, char *));
			else if (str[i] == 'd' || str[i] == 'i')
			{
				count += ft_putnb(va_arg(args, int));
			}
			else if (str[i] == 'c')
				ft_putchar(va_arg(args, int));
			else if (str[i] == '%')
				ft_putchar('%');
			else if (str[i] == 'p')
			{
				ft_putstr("0x");
				ft_dec_to_hex_ptr(va_arg(args, uintptr_t), "0123456789abcdef");
			}
			else if (str[i] == 'u')
				ft_putnb_unsigned(va_arg(args, unsigned int));
			else if (str[i] == 'x')
				ft_dec_to_hex(va_arg(args, unsigned int), "0123456789abcdef");
			else if (str[i] == 'X')
				ft_dec_to_hex(va_arg(args, unsigned int), "0123456789ABCDEF");
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	return (i + count);
}
#include <stdio.h>
int main(void)
{
	const char *str = "BONJOUR";

	int a = 2134;
	int b = 2134;
	int nb = 42;
	int nb2 = 10000;
	char dot = '.';

	ft_printf("j ai envie de te dire %p au moins %i fois %c J en suis sur a %d%%.\n", str, nb, dot, nb2);
	printf("j ai envie de te dire %p au moins %i fois %c J en suis sur a %d%%.\n", str, nb, dot, nb2);
	
	ft_printf("a est a %p et b a %p\n", &a, &b);
	printf("a est a %p et b a %p\n", &a, &b);
	
	ft_printf("%%%%%%%%%%%%\n");
	printf("%%%%%%%%%%%%\n");
	
	printf("%d\n", 42);
	printf("%i\n", 42);

	printf("%u\n", 4299677295);
	ft_printf("%u\n", 4299677295);

	ft_printf("%x", 4294967);
	printf("%x", 4294967);
	
	ft_printf("%X\n", 42947);
	printf("%X\n", 42947);

	ft_printf("je suis %s!\n");
	printf("je suis %s!\n");

	printf("%d\n", printf("%s %s\n", str, str));
	printf("%d\n", ft_printf("%s %s\n", str, str));

	printf("%d\n", ft_printf(NULL));
	printf("%d\n", printf(NULL));

	printf("%d\n", ft_printf("%s", ""));
	printf("%d\n", printf("%s", ""));

	printf("%d\n", ft_printf("je suis la pour la %d fois\n", 12345));
	printf("%d\n", printf("je suis la pour la %d fois\n", 12345));
}

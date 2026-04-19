/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 08:30:08 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/19 14:33:39 by mgerard          ###   ########.fr       */
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
				ft_putstr(va_arg(args, char *), &count);
			else if (str[i] == 'd' || str[i] == 'i')
				ft_putstr(ft_itoa(va_arg(args, int)), &count);
			else if (str[i] == 'c')
				count += ft_putchar(va_arg(args, int));
			else if (str[i] == '%')
				count += ft_putchar('%');
			else if (str[i] == 'p')
			{
				ft_putstr("0x", &count);
				ft_dec_to_hex_ptr(va_arg(args, uintptr_t), "0123456789abcdef", &count);
			}
			else if (str[i] == 'u')
				ft_putstr(ft_itoa_unsigned(va_arg(args, unsigned int)), &count);
			else if (str[i] == 'x')
			{
				ft_dec_to_hex(va_arg(args, unsigned int), "0123456789abcdef", &count);
				count -= 2;
			}
			else if (str[i] == 'X')
			{
				ft_dec_to_hex(va_arg(args, unsigned int), "0123456789ABCDEF", &count);
				count -= 2;
			}
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
/*	const char *str = "BONJOUR";

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

	printf("%d\n", ft_printf("je suis la pour la %d fois\n", UINT_MAX));
	printf("%d\n", printf("je suis la pour la %d fois\n", UINT_MAX));

	printf("%d\n", ft_printf("je suis la pour la %u fois\n", 0));
	printf("%d\n", printf("je suis la pour la %u fois\n", 0));
*/

	char c = 'B';
	char *s = "Je maffiche WOUAW!!!";
	char *p = &c;
	int d = -875393;
	unsigned int u = 4294967293;
	unsigned int x = 4294967293;
	unsigned int X = 4294967293;


	printf("nombre de char: %d\n", ft_printf("je suis le test final:\nchar: %c\nstr: %s\nptr: %p\nint: %d\nuint: %u\nhex low: %x\nhex up: %X\npercent: %%\n", c, s, p, d, u, x, X));
	printf("\n");
	printf("nombre de char: %d\n", printf("je suis le test final:\nchar: %c\nstr: %s\nptr: %p\nint: %d\nuint: %u\nhex low: %x\nhex up: %X\npercent: %%\n", c, s, p, d, u, x, X));



	//printf("nombre de char print: %d\n", ft_printf("%x", 4294967));
	//printf("nombre de char print: %d\n", printf("%x", 4294967));
	//printf("\n");
	//printf("nombre de char print: %d\n%p\n", ft_printf("%x", 4294967));
	//printf("nombre de char print: %d\n%p\n", printf("%x", 4294967));
}

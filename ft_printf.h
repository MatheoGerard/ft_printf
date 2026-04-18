/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 08:40:08 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/18 16:37:22 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdint.h>

void	ft_putchar(char c);
int	ft_putnb(int nb);
void	ft_dec_to_hex_ptr(uintptr_t nb, char *base);
void	ft_putnb_unsigned(unsigned int nb);
void	ft_dec_to_hex(unsigned int nb, char *base);
int	ft_putstr(const char *str);
int	ft_count_digits(int nb);

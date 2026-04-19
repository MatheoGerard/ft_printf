/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 08:40:08 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/19 14:26:33 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int	ft_putchar(char c);
void	ft_putnb(int nb);
void	ft_dec_to_hex_ptr(uintptr_t nb, char *base, int *count);
void	ft_putnb_unsigned(unsigned int nb);
void	ft_dec_to_hex(unsigned int nb, char *base, int *count);
void	ft_putstr(const char *str, int *count);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s);
size_t	ft_strlen(char *str);
char	*ft_itoa_unsigned(unsigned int n);

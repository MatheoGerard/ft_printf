/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 08:40:08 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/19 20:02:14 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdint.h>
# include <stdlib.h>

int		ft_putchar(char c);
void	ft_dec_to_hex_ptr(uintptr_t nb, char *base, int *count);
void	ft_putnbr_unsigned(unsigned int nb, int *count);
void	ft_dec_to_hex(unsigned int nb, char *base, int *count);
void	ft_putstr(const char *str, int *count);
void	ft_putnbr(int nb, int *count);

#endif // FT_PRINTF_H

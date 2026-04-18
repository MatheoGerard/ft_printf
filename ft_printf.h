/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 08:40:08 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/18 09:47:43 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int	ft_format_detection(const char *str, int *index);
void	ft_putchar(char c);
void	ft_putstr(const char *str);
void	ft_putnb(int nb);

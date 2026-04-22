/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 08:46:44 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/22 07:49:21 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *str, int *count)
{
	int	i;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		*count += 6;

	}
	i = 0;
	while (str && str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
		*count += 1;
	}
	*count -= 2;
}

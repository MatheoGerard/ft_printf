/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_detection.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgerard <mgerard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 08:37:04 by mgerard           #+#    #+#             */
/*   Updated: 2026/04/18 09:32:56 by mgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_format_detection(const char *str, int *index)  //?????
{
	while (str[*index] != '\0')
	{
		if (str[*index] == '%')
		{
			if (str[*index + 1] == 's')
				return 1;
			else if(str[*index + 1] == 'd')
				return 2;
		}
		*index++;
	}
	return 0;
}

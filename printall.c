/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printall.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:59:22 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/12/01 13:14:37 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printall(va_list arg, const char *format, int i, int len)
{
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			len += printchar(arg, format, i);
			len += printnb(arg, format, i);
			len += printad_unsigned(arg, format, i);
			i++;
		}
		else
		{
			ft_putchar(format[i]);
			len++;
		}
		i++;
	}
	return (len);
}

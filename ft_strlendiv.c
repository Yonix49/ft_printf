/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlendiv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2022/11/29 21:22:10 by marvin            #+#    #+#             */
/*   Updated: 2022/11/29 21:22:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_div_dec(long nb)
{
	unsigned int	i;

	i = 0;
	if (nb < 0)
	{
		i = i * -1;
		i++;
	}
	if (nb == 0)
		i++;
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	ft_div_hexa(unsigned long nb)
{
	unsigned long	i;

	i = 0;
	if (nb == 0)
		i++;
	while (nb != 0)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointeur.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 22:16:53 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/12/01 13:14:14 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putpointeur(void *nbr, char *base)
{
	unsigned long	taille;
	unsigned long	n;
	unsigned long	len;

	n = (unsigned long)nbr;
	taille = ft_strlen(base);
	if (!nbr)
	{
		len = write(1, "(nil)", 5);
		return (len);
	}
	write(1, "0x", 2);
	if (n >= taille)
	{
		ft_putnbr_base((n / taille), base);
	}
	ft_putchar(base[n % taille]);
	if (ft_strlen(base) == 16)
		len = ft_div_hexa(n) + 2;
	if (ft_strlen(base) == 10)
		len = ft_div_dec(n) + 2;
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:05:05 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/12/01 14:05:53 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	ft_putnbr_base(long nbr, char *base)
{
	int		taille;
	long	n;
	int		len;

	taille = ft_strlen(base);
	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n >= taille)
	{
		ft_putnbr_base((n / taille), base);
	}
	ft_putchar(base[n % taille]);
	if (ft_strlen(base) == 16)
		len = ft_div_hexa(nbr);
	if (ft_strlen(base) == 10)
		len = ft_div_dec(nbr);
	return (len);
}

// int main()
// {
// 	char hexa [] = "0123456789abcdef";
// 	char s1 [] = "dfsdfsdfds";
// 	int len = ft_putnbr_base(0, hexa);
// 	printf("%p", s1)
// 	char dec [] = "0123456789";
// 	int bla = ft_putnbr_base(634213, dec);
// 	printf("\n%i\n", bla);
// }
// 	int *len;
// 	int i = 0;
// 	while (i < 12)
// 	{

// 		i++;
// 	}
// 	return (0);

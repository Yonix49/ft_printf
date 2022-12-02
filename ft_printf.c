/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 08:01:04 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/12/02 12:20:15 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int	printchar(va_list arg, const char *format, int i)
{
	unsigned long	len;

	len = 0;
	if (format[i + 1] == '%')
	{
		ft_putchar('%');
		len++;
	}
	else if (format[i + 1] == 'c')
	{
		ft_putchar(va_arg(arg, int));
		len++;
		i++;
	}
	else if (format[i + 1] == 's')
	{
		len += ft_putstr(va_arg(arg, char *));
		i++;
	}
	return (len);
}

int	printnb(va_list arg, const char *format, int i)
{
	int	len;

	len = 0;
	if (format[i + 1] == ('i'))
	{
		len += ft_putnbr_base(va_arg(arg, int), "0123456789");
		i++;
	}
	else if (format[i + 1] == ('d'))
	{
		len += ft_putnbr_base(va_arg(arg, int), "0123456789");
		i++;
	}
	else if (format[i + 1] == 'X')
	{
		len += ft_putnbr_base(va_arg(arg, unsigned int), "0123456789ABCDEF");
		i++;
	}
	else if (format[i + 1] == 'x')
	{
		len += ft_putnbr_base(va_arg(arg, unsigned int), "0123456789abcdef");
		i++;
	}
	return (len);
}

int	printad_unsigned(va_list arg, const char *format, int i)
{
	int	len;

	len = 0;
	if (format[i + 1] == 'p')
	{
		len += ft_putpointeur(va_arg(arg, void *), "0123456789abcdef");
		i++;
	}
	if (format[i + 1] == 'u')
	{
		len += ft_putnbr_base(va_arg(arg, unsigned int), "0123456789");
		i++;
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		len;
	int		i;

	va_start(arg, format);
	len = 0;
	i = 0;
	if (!format)
		return (0);
	len += printall(arg, format, i, len);
	va_end(arg);
	return (len);
}

// int	main(void)
// {
// 	   ft_printf("%dxC is the lowest temperature in the universe", -164);
// 	// char	*s1 = NULL;
// 	// int n = 65236;
// 	// int i = 0;
// 	// char s2 [] = "Allez la kcorp";
// 	// // n= ft_printf("%d\n", 6532144);
// 	// // printf("%d", n);
// 	// // i = ft_printf("%p", s1);
// 	// // printf("%p\n", s1);
// 	// // printf("%i\n", i);
// 	// i = printf("%p\n", s2);
// 	// ft_printf("%p\n", s2);
// 	// printf("%i\n", i);
// 	// 	printf("ft = %d \n", printf("%d   %s\n %p", -6532144, "blabla", NULL ,
// }
// printf("%d \n", ft_printf("%d   %s\n %p", -6532144, "blabla", NULL ,

// 	printf("%%\n");
// 	// int Printnb = ft_printf("Salut %i\n", 3256);
// 	// ft_printf("%i", Printnb);
// 	// printf(" %u\n", -);
// 	// ft_printf(" %u\n", -);
// 	printf(" %c\n", 65);
// 	ft_printf(" %c\n", 65);
// 	printf("\n");
// 	ft_printf("Bla %p Bla \n", NULL);
// 	printf("Bla %p Bla \n", NULL);
// 	// int Printnb = ft_printf("Bla %p Bla \n", s1);
// 	// int Printnb = printf("Bla %p Bla \n", s1);
// 	printf("\n");
// 	ft_printf("Bla %u Bla \n", -95);
// 	printf("Bla %u Bla \n", -95);
// 	printf("\n");

// 	printf("\n");
// 	ft_printf("boooo %i\n", 95663);
// 	printf("boooo %i\n", 95663);
// 	printf("\n");
// }
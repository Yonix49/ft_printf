/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:09:58 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/12/01 13:12:35 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_putnbr_base(long nbr, char *base);

int		ft_printf(const char *format, ...);

int		ft_strlen(char *str);

int		ft_putstr(const char *str);

int		ft_div_dec(long nb);

int		ft_div_hexa(unsigned long nb);

void	ft_putchar(char c);

int		ft_putpointeur(void *nbr, char *base);

int		printall(va_list arg, const char *format, int i, int len);

int		printad_unsigned(va_list arg, const char *format, int i);

int		printnb(va_list arg, const char *format, int i);

int		printchar(va_list arg, const char *format, int i);

#endif

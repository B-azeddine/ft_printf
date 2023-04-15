/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:33:56 by ablidi            #+#    #+#             */
/*   Updated: 2022/12/26 01:11:25 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list arg, const char *str, int j)
{
	if (str[j + 1] == '%')
		return (ft_putchar('%'));
	if (str[j + 1] == 'c')
		return (ft_putchar(va_arg(arg, int)));
	if (str[j + 1] == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (str[j + 1] == 'd' || str[j + 1] == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	if (str[j + 1] == 'u')
		return (ft_putnbr(va_arg(arg, unsigned int)));
	if (str[j + 1] == 'x')
		return (ft_puthex(va_arg(arg, unsigned int), "0123456789abcdef"));
	if (str[j + 1] == 'X')
		return (ft_puthex(va_arg(arg, unsigned int), "0123456789ABCDEF"));
	if (str[j + 1] == 'p')
	{
		ft_putstr("0x");
		return (ft_puthex(va_arg(arg, size_t), "0123456789abcdef") + 2);
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		cmt;
	va_list	arg;

	cmt = 0;
	i = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			cmt += ft_format(arg, format, i);
			i++;
		}
		else
			cmt += ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (cmt);
}

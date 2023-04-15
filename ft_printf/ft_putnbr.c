/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:56:20 by ablidi            #+#    #+#             */
/*   Updated: 2022/12/02 19:05:05 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long a)
{
	size_t	cmt;

	cmt = 0;
	if (a < 0)
	{
		a = -a;
		cmt += ft_putchar('-');
	}
	if (a > 9)
	{
		cmt += ft_putnbr(a / 10);
		cmt += ft_putnbr(a % 10);
	}
	else
		cmt += ft_putchar(a + 48);
	return (cmt);
}

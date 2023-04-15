/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:20:15 by ablidi            #+#    #+#             */
/*   Updated: 2022/12/02 18:37:00 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(size_t num, char *base)
{
	size_t	cmt;

	cmt = 0;
	if (num >= 16)
	{
		cmt += ft_puthex(num / 16, base);
		cmt += ft_puthex(num % 16, base);
	}
	else
		cmt += ft_putchar(base[num]);
	return (cmt);
}

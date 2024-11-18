/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 09:52:27 by aybouatr          #+#    #+#             */
/*   Updated: 2024/11/18 08:51:55 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	long long	number;
	int			n;

	n = 0;
	number = nb;
	if (number < 0)
	{
		n += ft_putchar('-');
		number = -number;
	}
	if (number <= 9)
		n += ft_putchar(number + '0');
	else
	{
		n += ft_putnbr(number / 10);
		n += ft_putnbr(number % 10);
	}
	return (n);
}

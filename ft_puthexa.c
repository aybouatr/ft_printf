/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:22:53 by aybouatr          #+#    #+#             */
/*   Updated: 2024/11/18 08:49:26 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	counter_nb(unsigned long nb)
{
	int	counter;

	counter = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb = nb / 16;
		counter++;
	}
	return (counter++);
}

int	ft_puthexa(unsigned long nb, char c)
{
	char	*hex;

	if (c == 'x')
		hex = "0123456789abcdef";
	if (c == 'X')
		hex = "0123456789ABCDEF";
	if (nb > 15)
		ft_puthexa(nb / 16, c);
	ft_putchar(hex[nb % 16]);
	return (counter_nb(nb));
}

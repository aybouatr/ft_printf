/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:34:57 by aybouatr          #+#    #+#             */
/*   Updated: 2024/11/18 08:47:39 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadd(unsigned long add)
{
	int	count;

	count = 2;
	ft_putstr("0x");
	count += ft_puthexa(add, 'x');
	return (count);
}

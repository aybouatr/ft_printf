/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 11:52:18 by aybouatr          #+#    #+#             */
/*   Updated: 2024/11/16 11:52:22 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	func_check(const char *format, va_list ap)
{
	int	count;

	count = 0;
	if (*(format + 1) == 'd' || *(format + 1) == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (*(format + 1) == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (*(format + 1) == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (*(format + 1) == 'x' || *(format + 1) == 'X')
		count += ft_puthexa(va_arg(ap, unsigned int), *(format + 1));
	else if (*(format + 1) == 'p')
		count += ft_putadd(va_arg(ap, unsigned long));
	else if (*(format + 1) == '%')
		count += ft_putchar('%');
	else if (*(format + 1) == 'u')
		count += ft_putnbr_unsigned(va_arg(ap, unsigned int));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	va_start(ap, format);
	if (!format || write(1, "w", 0) == -1)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			count += func_check(format, ap);
			format++;
		}
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (count);
}

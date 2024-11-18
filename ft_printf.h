/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 09:10:37 by aybouatr          #+#    #+#             */
/*   Updated: 2024/11/16 09:21:12 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_printf(const char *format, ...);
int	ft_puthexa(unsigned long nb, char c);
int	ft_putadd(unsigned long add);

#endif

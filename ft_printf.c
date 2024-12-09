/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yraiss <yraiss@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:08:15 by yraiss            #+#    #+#             */
/*   Updated: 2022/11/07 11:27:21 by yraiss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Absolutely not my proudest

#include "ft_printf.h"

int	minprintf(va_list ap, const char *ptr)
{
	int		count;

	count = 0;
	if (*ptr == '%')
		count += ft_putchar('%');
	else if (*ptr == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (*ptr == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if ((*ptr == 'd') || (*ptr == 'i'))
		count += ft_putnbr(va_arg(ap, long));
	else if (*ptr == 'u')
		count += ft_putnbr_un(va_arg(ap, unsigned int));
	else if (*ptr == 'p')
	{
		write(1, "0x", 2);
		count += ft_putnbr_base(va_arg(ap, unsigned long), 1) + 2;
	}
	else if (*ptr == 'x')
		count += ft_putnbr_base(va_arg(ap, unsigned int), 1);
	else if (*ptr == 'X')
		count += ft_putnbr_base(va_arg(ap, unsigned int), 0);
	return (count);
}

int	ft_printf(const char *ptr, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	va_start(ap, ptr);
	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			ptr++;
			count += minprintf(ap, ptr);
		}
		else
			count += ft_putchar(*ptr);
		ptr++;
	}
	va_end(ap);
	return (count);
}


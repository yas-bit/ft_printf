/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yraiss <yraiss@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:13:19 by yraiss            #+#    #+#             */
/*   Updated: 2022/11/06 16:26:21 by yraiss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	long long	n;
	int			c;

	n = (long long) num;
	c = 1;
	if (n < 0)
	{
		n = -n;
		c += ft_putchar('-');
	}
	if (n < 10)
		ft_putchar(n + 48);
	else if (n >= 10)
	{
		c += ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	return (c);
}

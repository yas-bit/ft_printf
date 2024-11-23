/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yraiss <yraiss@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:39:47 by yraiss            #+#    #+#             */
/*   Updated: 2022/11/06 16:24:59 by yraiss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count(unsigned long n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

int	ft_putnbr_base(unsigned long n, int i)
{
	int		c;
	char	*base;	

	c = 1;
	if (i)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n == 0)
	{
		ft_putchar(base[0]);
		return (1);
	}
	if (n < 16)
		ft_putchar(base[n % 16]);
	else
	{
		c += ft_putnbr_base(n / 16, i);
		ft_putnbr_base(n % 16, i);
	}
	return (c);
}

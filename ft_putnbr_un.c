/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yraiss <yraiss@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:59:57 by yraiss            #+#    #+#             */
/*   Updated: 2022/11/06 16:28:00 by yraiss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_un(unsigned int num)
{
	int	c;

	c = 1;
	if (num < 10)
		ft_putchar(num + 48);
	else if (num >= 10)
	{
		c += ft_putnbr_un(num / 10);
		ft_putnbr_un(num % 10);
	}
	return (c);
}

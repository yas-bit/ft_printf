/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yraiss <yraiss@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:43:11 by yraiss            #+#    #+#             */
/*   Updated: 2022/11/06 16:25:51 by yraiss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *ptr, ...);
int		ft_putchar(char c);
int		ft_putnbr(int num);
int		ft_putnbr_un(unsigned int num);
int		ft_putnbr_base(unsigned long n, int i);
int		ft_putstr(char *s);

#endif
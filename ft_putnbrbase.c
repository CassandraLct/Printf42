/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:16:16 by clecat            #+#    #+#             */
/*   Updated: 2021/11/09 09:06:15 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrbase(unsigned int n)
{
	const char	*base;
	char		c;
	int			all;

	c = 0;
	all = 0;
	base = "0123456789abcdef";
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
		all++;
	}
	if (n <= 15 && n >= 0)
	{
		c = n + '0';
		write(1, &base[n], 1);
		all++;
	}
	if (n > 15)
	{
		all += ft_putnbrbase(n / 16);
		all += ft_putnbrbase(n % 16);
	}
	return (all);
}

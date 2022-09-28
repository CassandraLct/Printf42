/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrsgn.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:36:12 by clecat            #+#    #+#             */
/*   Updated: 2021/11/09 09:02:35 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrsgn(unsigned int n)
{
	char	c;
	int		all;

	all = 0;
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
		all++;
	}
	if (n <= 9 && n >= 0)
	{
		c = n + '0';
		write(1, &c, 1);
		all++;
	}
	if (n > 9)
	{
		all += ft_putnbrsgn(n / 10);
		all += ft_putnbrsgn(n % 10);
	}
	return (all);
}

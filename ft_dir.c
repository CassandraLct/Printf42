/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dir.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:20:31 by clecat            #+#    #+#             */
/*   Updated: 2021/11/09 09:58:50 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dir(const char afterprc, void *ap)
{
	int	all;

	all = 0;
	if ((int)afterprc == 'c')
		all += ft_putchar((char)ap);
	else if ((int)afterprc == 's')
		all += ft_putstr((char *)ap);
	else if ((int)afterprc == 'd')
		all += ft_putnbr((int)ap);
	else if ((int)afterprc == 'i')
		all += ft_putnbr((int)ap);
	else if ((int)afterprc == 'u')
		all += ft_putnbrsgn((unsigned int)ap);
	else if ((int)afterprc == 'p')
	{
		write (1, "0x", 2);
		all += 2;
		all += ft_putnbrbasep((unsigned long int)ap);
	}
	else if ((int)afterprc == 'x')
		all += ft_putnbrbase((long)ap);
	else if ((int)afterprc == 'X')
		all += ft_putnbrbasemaj((long)ap);
	return (all);
}

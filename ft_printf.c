/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:33:30 by clecat            #+#    #+#             */
/*   Updated: 2021/11/09 09:59:09 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *lst, ...)
{
	int		i;
	va_list	ap;
	int		all;

	all = 0;
	i = 0;
	va_start(ap, lst);
	while (lst[i])
	{
		if (lst[i] == '%' && lst[i + 1] != '%')
			all += ft_dir(lst[i++ + 1], va_arg(ap, void *));
		else if (lst[i] == '%' && lst[i++ + 1] == '%')
		{
			write (1, "%", 1);
			all++;
		}
		else
		{
			ft_putchar(lst[i]);
			all++;
		}
		i++;
	}
	va_end(ap);
	return (all);
}

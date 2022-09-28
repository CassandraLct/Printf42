/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:34:02 by clecat            #+#    #+#             */
/*   Updated: 2021/11/09 09:08:25 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *lst, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putnbrbase(unsigned int n);
int	ft_putnbrbasep(unsigned long int n);
int	ft_putnbrbasemaj(unsigned int n);
int	ft_putnbrsgn(unsigned int n);
int	ft_dir(const char afterprc, void *ap);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:10:33 by nargouse          #+#    #+#             */
/*   Updated: 2021/09/16 16:52:52 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_putchar(char c, int *p_char)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	(*p_char)++;
	return (0);
}

static int	ft_p(long i, char *hexa, int *p_char)
{
	if (i < 0)
	{
		if (ft_putchar('-', p_char) == -1)
			return (-1);
		i *= -1;
	}
	if (i > 15)
	{
		ft_p(i / 16, hexa, p_char);
		ft_p(i % 16, hexa, p_char);
	}
	if (i < 16)
	{
		if (ft_putchar(hexa[i % 16], p_char) == -1)
			return (-1);
	}
	return (0);
}

int	ft_flag_p(va_list va, int *p_char)
{
	long	str;
	char	*hexa;

	hexa = "0123456789abcdef";
	str = va_arg(va, long);
	write(1, "0x", 2);
	(*p_char) += 2;
	if (ft_p(str, hexa, p_char) == -1)
		return (-1);
	return (0);
}

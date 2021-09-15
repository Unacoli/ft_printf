/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:10:33 by nargouse          #+#    #+#             */
/*   Updated: 2021/09/15 20:10:50 by nargouse         ###   ########.fr       */
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

static int	ft_p(void *str, char *hexa, int *p_char)
{
	int i;

	i = (int)str;
	if (i < 0)
	{
		if (ft_putchar('-', p_char) == -1)
			return (-1);
		i *= -1;
	}
	if (i > 15)
	{
		ft_p((int)i / 16, hexa, p_char);
		ft_p((int)i % 16, hexa, p_char);
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
	void	*str;
	char	*hexa;

	hexa = "0123456789abcdef";
	str = va_arg(va, void *);
	write(1, "0x10", 4);
	(*p_char) += 4;
	if (ft_p(str, hexa, p_char) == -1)
		return (-1);
	return (0);
}

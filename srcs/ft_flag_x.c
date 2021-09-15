/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:12:45 by nargouse          #+#    #+#             */
/*   Updated: 2021/09/15 20:00:32 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int ft_putchar(char c, int *p_char)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	(*p_char)++;
	return (0);
}

static int	ft_x(int n, int *p_char)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (n < 0)
	{
		if (ft_putchar('-', p_char) == -1)
			return (-1);
		n *= -1;
	}
	if (n > 15)
	{
		ft_x(n / 16, p_char);
		ft_x(n % 16, p_char);
	}
	if (n < 16)
	{
		if (ft_putchar(hexa[n % 16], p_char) == -1)
			return (-1);
	}
	return (0);
}

static int	ft_X(int n, int *p_char)
{
	char	*hexa;

	hexa = "0123456789ABCDEF";
	if (n < 0)
	{
		if (ft_putchar('-', p_char) == -1)
			return (-1);
		n *= -1;
	}
	if (n > 15)
	{
		ft_X(n / 16, p_char);
		ft_X(n % 16, p_char);
	}
	if (n < 16)
	{
		if (ft_putchar(hexa[n % 16], p_char) == -1)
			return (-1);
	}
	return (0);
}

int	ft_flag_x(va_list va, int *p_char, char format)
{
	int	n;

	n = va_arg(va, int);
	if (format == 'x')
	{
		if (ft_x(n, p_char) == -1)
			return (-1);
	}
	else if (format == 'X')
	{
		if (ft_X(n, p_char) == -1)
			return (-1);
	}
	return (0);
}

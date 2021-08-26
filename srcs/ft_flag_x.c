/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:12:45 by nargouse          #+#    #+#             */
/*   Updated: 2021/08/26 16:39:58 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_x(int i, int *p_char)
{
	char	*str;

	str = "0123456789abcdef";
	if (i == 0)
	{
		if (write(1, "0", 1) == -1)
			return (-1);
		(*p_char)++;
		return (0);
	}
	while (i)
	{
		if (write(1, &str[i % 16], 1) == -1)
			return (-1);
		(*p_char)++;
		i /= 16;
	}
	return (0);
}

static int	ft_X(int i, int *p_char)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (i == 0)
	{
		if (write(1, "0", 1) == -1)
			return (-1);
		(*p_char)++;
		return (0);
	}
	while (i)
	{
		if (write(1, &str[i % 16], 1) == -1)
			return (-1);
		(*p_char)++;
		i /= 16;
	}
	return (0);
}

int	ft_flag_x(va_list va, int *p_char, char format)
{
	int	i;

	i = va_arg(va, int);
	if (format == 'x')
	{
		if (ft_x(i, p_char) == -1)
			return (-1);
	}
	else if (format == 'X')
	{
		if (ft_X(i, p_char) == -1)
			return (-1);
	}
	return (0);
}

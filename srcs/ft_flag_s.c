/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:39:28 by nargouse          #+#    #+#             */
/*   Updated: 2021/08/19 15:17:46 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flag_s(va_list va, int *p_char)
{
	char	*s;
	int		i;

	i = 0;
	s = va_arg(va, char *);
	while (s[i])
		i++;
	if (write(1, s, i) == -1)
		return (-1);
	*p_char += i;
	return (0);
}

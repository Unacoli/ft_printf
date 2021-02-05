/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 12:17:21 by nargouse          #+#    #+#             */
/*   Updated: 2021/02/01 16:14:48 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi_base(const char *str, char *base)
{
	int		index;
	int		sign;
	int		num;

	sign = 1;
	index = 0;
	num = 0;
	while (ft_isspace(str[index]))
		index++;
	while (str[index] == '-' || str[index] == '+')
		if (str[index++] == '-')
			sign *= -1;
	while (ft_isinbase(str[index], base) >= 0)
	{
		num *= ft_check_base(base);
		num += sign * ft_isinbase(str[index], base);
		index++;
	}
	return (num);
}

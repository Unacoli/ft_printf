/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_base_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:32:14 by nargouse          #+#    #+#             */
/*   Updated: 2021/01/28 15:33:22 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_base(const char *base)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j] || (base[j] >= 9 && base[j] <= 13) ||
			base[j] == 32 || base[j] == '+' || base[j] == '-')
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	if (i <= 1)
		return (0);
	return (i);
}

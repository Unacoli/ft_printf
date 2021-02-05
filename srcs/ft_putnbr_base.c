/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 12:07:44 by nargouse          #+#    #+#             */
/*   Updated: 2021/02/01 17:10:31 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_error_base(char *base, int l_base)
{
	int i;
	int j;

	i = 0;
	if (!base || l_base == 0 || l_base == 1)
		return (0);
	while (i <= l_base - 1)
	{
		j = i + 1;
		while (j <= l_base - 1)
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void			ft_putnbr_base(int nbr, char *base)
{
	int	l_base;

	l_base = ft_strlen(base);
	if (ft_error_base(base, l_base) == 0)
		return ;
	ft_putnbr(nbr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:33:36 by nargouse          #+#    #+#             */
/*   Updated: 2021/01/28 15:34:52 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int nb, const char *base)
{
	int				index;
	unsigned int	nbr;
	char			num[67];

	nbr = nb;
	index = 65;
	num[66] = 0;
	num[65] = base[0];
	if (nb < 0)
		nbr = nb * -1;
	while (nbr > 0)
	{
		num[index--] = base[nbr % ft_check_base(base)];
		nbr /= ft_check_base(base);
	}
	if (nb < 0)
		num[index] = '-';
	else if (nb != 0)
		index++;
	return (ft_strdup(&num[index]));
}

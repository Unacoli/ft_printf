/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 12:16:20 by nargouse          #+#    #+#             */
/*   Updated: 2021/02/01 16:15:42 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_convert_base(const char *nbr, char *b_from, char *b_to)
{
	int		nb;
	char	*num;

	if (!ft_check_base(b_from) || !ft_check_base(b_to))
		return (0);
	nb = ft_atoi_base(nbr, b_from);
	num = ft_itoa_base(nb, b_to);
	return (num);
}

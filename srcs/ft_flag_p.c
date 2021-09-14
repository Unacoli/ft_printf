/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:10:33 by nargouse          #+#    #+#             */
/*   Updated: 2021/09/14 19:23:49 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_flag_p(va_list va, int *p_char)
{
	void *str;

	str = va_arg(va, int);
	*p_char = 0;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:06:51 by nargouse          #+#    #+#             */
/*   Updated: 2021/09/15 20:09:37 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../include/ft_printf.h"

int main()
{
	char *str;
	int i;

	str = "abcdef456435";
	i = 14684351;
	printf("%x\n", i);
	printf("%d\n", ft_printf("%x\n", i));
	printf("%X\n", i);
	printf("%d\n", ft_printf("%X\n", i));
	printf("%p\n", str);
	printf("%d\n", ft_printf("%p\n", str));

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:06:51 by nargouse          #+#    #+#             */
/*   Updated: 2021/09/23 19:04:40 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../include/ft_printf.h"

int main()
{
	char *str;
	int i;

	str = "abcdef456435";
	i = 427295;
	printf("%x\n", i);
	printf("%d\n", ft_printf("%x\n", i));
	printf("%X\n", i);
	printf("%d\n", ft_printf("%X\n", i));
	printf("%p\n", str);
	printf("%d\n", ft_printf("%p\n", str));
	printf("%d\n", i);
	printf("%d\n", ft_printf("%d\n", i));
	printf("%i\n", i);
	printf("%d\n", ft_printf("%i\n", i));
	printf("%c\n", str[1]);
	printf("%d\n", ft_printf("%c\n", str[1]));
	printf("%%\n");
	printf("%d\n", ft_printf("%%\n"));
	printf("%s\n", str);
	printf("%d\n", ft_printf("%s\n", str));
	printf("%u\n", i);
	printf("%d\n", ft_printf("%u\n", i));


	return (0);
}

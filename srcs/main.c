/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:06:51 by nargouse          #+#    #+#             */
/*   Updated: 2021/09/23 23:30:21 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../include/ft_printf.h"

int main()
{
	char *str;
	int i;

	str = "riche";
	//str = NULL;
	i = -42;
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
	printf("%c\n", str[0]);
	printf("%d\n", ft_printf("%c\n", str[0]));
	printf("%%\n");
	printf("%d\n", ft_printf("%%\n"));
	printf("%s\n", str);
	printf("%d\n", ft_printf("nootnoot%s\n", str));
	printf("%u\n", i);
	printf("%d\n", ft_printf("%u\n", i));

	return (0);
}

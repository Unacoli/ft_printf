/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 13:20:01 by nargouse          #+#    #+#             */
/*   Updated: 2021/02/01 17:00:28 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		total_length;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	total_length = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = 0;
	if (!(result = (char *)malloc(sizeof(char *) * (total_length + 1))))
		return (NULL);
	while (i < total_length)
	{
		while (s1[j])
		{
			result[i] = s1[j];
			i++;
			j++;
		}
		j = 0;
		while (s2[j])
		{
			result[i] = s2[j];
			i++;
			j++;
		}
	}	
	result[i] = '\0';
	return (result);
}

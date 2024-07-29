/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:57:14 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/07/28 17:00:25 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dest;

	i = 0;
	len_dest = ft_strlen(dest);
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (len_dest + ft_strlen(src));
}
/*
#include <stdio.h>

int	main()
{
	char dest[] = "abc";
	char src[] = "defghi";

	printf("%d", ft_strlcat(dest, src, 3));
}*/

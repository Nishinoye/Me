/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:57:14 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/07/30 16:45:02 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
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
	if (size <= len_dest)
		return (size + ft_strlen(src));
	j = 0;
	while (src[j] && j + len_dest < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (len_dest + ft_strlen(src));
}
/*
#include <stdio.h>

int	main()
{
	char dest[] = "abc";
	char src[] = "defghi";

	printf("%d", ft_strlcat(dest, src, 100));
	printf("%s", dest);
}*/

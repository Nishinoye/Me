/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:20:30 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/07/29 17:21:40 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] == to_find[j] && str[i])
		{
			i++;
			j++;
		}
		if (to_find[j] == 0)
			return (&str[i - j]);
		else if (j > 0)
			i--;
		i++;
	}
	return (0);
}
/*
#include<string.h>
#include <stdio.h>

int	main()
{
	char s1[] = "abcdedeghdef";
	char s2[] = "";

	printf("%s", ft_strstr(s1, s2));
}*/

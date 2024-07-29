/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:20:30 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/07/25 19:15:38 by tedcarpi         ###   ########.fr       */
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
		else
			i = i - j;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	char s1[] = "abcdedeghdef";
	char s2[] = "def";

	printf("%s", ft_strstr(s1, s2));
}*/

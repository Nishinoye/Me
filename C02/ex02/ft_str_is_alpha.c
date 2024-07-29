/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 09:41:21 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/07/23 16:43:00 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		i++;
	if (str[i] == 0)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_str_is_alpha("abcdeFGHI"));
	printf("%d", ft_str_is_alpha("abc123deFGHI"));
	printf("%d", ft_str_is_alpha("123"));
}
*/

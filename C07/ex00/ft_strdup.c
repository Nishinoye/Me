/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:45:10 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/08/07 14:05:10 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*s2;
	int		i;

	i = 0;
	while (src[i])
		i++;
	s2 = malloc ((i + 1) * sizeof(char));
	if (s2 == 0)
		return (NULL);
	s2[i] = 0;
	while (i >= 0)
	{
		s2[i] = src[i];
		i--;
	}
	return (s2);
}

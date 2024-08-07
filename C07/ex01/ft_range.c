/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 23:13:45 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/07/31 14:11:45 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*range;

	if (min >= max)
		return (NULL);
	len = max - min;
	range = malloc (len * sizeof(int));
	i = 0;
	if (range == NULL)
		return (NULL);
	while (i < len)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main()
{
	int	*tab;
	int	i;

	tab = ft_range(0, 100);
	i = 0;
	while (i < 100)
	{
		printf("%d", tab[i]);
		printf("%s", ", ");
		i++;
	}
	printf("%s", "\n");
	free(tab);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:31:04 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/08/07 14:09:14 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	len = max - min;
	if (len <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc (len * sizeof(int));
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (len);
}
/*
int	main()
{
	int	i;
	int	*tab;

	i = ft_ultimate_range(&tab, 0, 10);
	printf("%d", i);
}*/

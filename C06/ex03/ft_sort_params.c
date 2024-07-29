/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 09:18:18 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/07/29 09:47:40 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{	
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

char	**ft_swap(char **str)
{
	int	i;
	int	j;
	int	k;
	char	*swap;

	i = 1;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			k = 0;
			while ((str[i][k] || str[j][k]) && str[i][k] == str[j][k])
			{
				if (str[i][k] > str[j][k])
				{
					swap = str[i];
					str[i] = str[j];
					str[j] = swap;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		while (i < argc)
		{
			ft_putstr(argv[i]);
			i++;
		}
	}
	return (0);
}

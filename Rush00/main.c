/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 12:27:31 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/07/28 17:05:42 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void	rush(int index, int x, int y);
extern void	ft_putchar(char c);

int	ft_atoi(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i] != 0)
	{
		if (str[i] == 45)
			return (-1);
		while (str[i] >= 48 && str[i] <= 57)
		{
			nb = nb * 10 + str[i] - 48;
			i++;
		}
	}
	return (nb);
}

int	ft_check_int(int i)
{
	if (i > 0 && i <= 2147483647)
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int	index;
	int	x;
	int	y;

	if (argc == 1)
	{
		rush(3, 5, 5);
		return (0);
	}
	if (argc != 4)
	{
		write(1, "Only 3 arguments please\n", 24);
		return (0);
	}
	else
	{
		index = ft_atoi(argv[1]);
		x = ft_atoi(argv[2]);
		y = ft_atoi(argv[3]);
		if ((index >= 0 && index <= 4) && ft_check_int(x) && ft_check_int(y))
			rush(index, x, y);
		else
			write(1, "need 3 digits\n1st between 0 and 4\n2nd & 3rd > 0\n", 49);
	}
}

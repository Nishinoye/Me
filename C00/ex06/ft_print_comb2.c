/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:02:28 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/07/16 17:12:42 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	nb = nb % 10 + 48;
	write(1, &nb, 1);
	return (1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 97)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (i < 10)
				write(1, "0", 1);
			ft_putnbr(i);
			write(1, " ", 1);
			if (j < 10)
				write(1, "0", 1);
			ft_putnbr(j);
			write(1, ", ", 2);
			j++;
		}
		i++;
	}
	write(1, "98 99", 5);
}
/*
int	main()
{
	ft_print_comb2();
}
*/
